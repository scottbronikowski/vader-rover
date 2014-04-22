/*
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2011 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "uinput_config.hpp"

#include "helper.hpp"
#include "uinput.hpp"
#include "uinput_options.hpp"

namespace {
// FIXME: duplicate code
int16_t u8_to_s16(uint8_t value)
{
  // FIXME: verify this
  if (value < 128)
  {
    return -32768 + (value * 32768 / 128);
  }
  else
  {
    return (value-128) * 32767 / 127;
  }
}
} // namespace

UInputConfig::UInputConfig(UInput& uinput, int slot, bool extra_devices, const UInputOptions& opts) :
  m_uinput(uinput),
  m_btn_map(opts.get_btn_map()), 
  m_axis_map(opts.get_axis_map())
{
  std::fill_n(axis_state,   static_cast<int>(XBOX_AXIS_MAX), 0);
  std::fill_n(button_state,      static_cast<int>(XBOX_BTN_MAX),  false);
  std::fill_n(last_button_state, static_cast<int>(XBOX_BTN_MAX),  false);

  m_btn_map.init(uinput, slot, extra_devices);
  m_axis_map.init(uinput, slot, extra_devices);
}

void
UInputConfig::send(XboxGenericMsg& msg)
{
  std::copy(button_state, button_state+XBOX_BTN_MAX, last_button_state);

  switch(msg.type)
  {
    case XBOX_MSG_XBOX:
      send(msg.xbox);
      break;

    case XBOX_MSG_XBOX360:
      send(msg.xbox360);
      break;

    case XBOX_MSG_PS3USB:
      send(msg.ps3usb);
      break;
        
    default:
      assert(!"never reached");
  }

  m_uinput.sync();
}

void
UInputConfig::send(Xbox360Msg& msg)
{
  // analog stick button
  send_button(XBOX_BTN_THUMB_L, msg.thumb_l);
  send_button(XBOX_BTN_THUMB_R, msg.thumb_r);

  // shoulder button
  send_button(XBOX_BTN_LB, msg.lb);
  send_button(XBOX_BTN_RB, msg.rb);

  // start/back button
  send_button(XBOX_BTN_START, msg.start);
  send_button(XBOX_BTN_GUIDE, msg.guide);
  send_button(XBOX_BTN_BACK, msg.back);

  // face button
  send_button(XBOX_BTN_A, msg.a);
  send_button(XBOX_BTN_B, msg.b);
  send_button(XBOX_BTN_X, msg.x);
  send_button(XBOX_BTN_Y, msg.y);

  // trigger
  send_button(XBOX_BTN_LT, msg.lt); // FIXME: no deadzone handling here
  send_button(XBOX_BTN_RT, msg.rt);

  // dpad
  send_button(XBOX_DPAD_UP,    msg.dpad_up);
  send_button(XBOX_DPAD_DOWN,  msg.dpad_down);
  send_button(XBOX_DPAD_LEFT,  msg.dpad_left);
  send_button(XBOX_DPAD_RIGHT, msg.dpad_right);

  // trigger
  send_axis(XBOX_AXIS_LT, msg.lt);
  send_axis(XBOX_AXIS_RT, msg.rt);

  send_axis(XBOX_AXIS_TRIGGER, (int(msg.rt) - int(msg.lt)));

  // analog sticks
  send_axis(XBOX_AXIS_X1,  msg.x1);
  send_axis(XBOX_AXIS_Y1,  s16_invert(msg.y1));
  
  send_axis(XBOX_AXIS_X2,  msg.x2);
  send_axis(XBOX_AXIS_Y2,  s16_invert(msg.y2));

  // dpad
  if      (msg.dpad_up)    send_axis(XBOX_AXIS_DPAD_Y, -1);
  else if (msg.dpad_down)  send_axis(XBOX_AXIS_DPAD_Y,  1);
  else                     send_axis(XBOX_AXIS_DPAD_Y,  0);

  if      (msg.dpad_left)  send_axis(XBOX_AXIS_DPAD_X, -1);
  else if (msg.dpad_right) send_axis(XBOX_AXIS_DPAD_X,  1);
  else                     send_axis(XBOX_AXIS_DPAD_X,  0);
}

void
UInputConfig::send(XboxMsg& msg)
{
  // analog stick button
  send_button(XBOX_BTN_THUMB_L, msg.thumb_l);
  send_button(XBOX_BTN_THUMB_R, msg.thumb_r);

  // start/back button
  send_button(XBOX_BTN_START, msg.start);
  send_button(XBOX_BTN_BACK,  msg.back);

  // face button
  send_button(XBOX_BTN_A, msg.a);
  send_button(XBOX_BTN_B, msg.b);
  send_button(XBOX_BTN_X, msg.x);
  send_button(XBOX_BTN_Y, msg.y);

  send_button(XBOX_BTN_LB, msg.white);
  send_button(XBOX_BTN_RB, msg.black);

  // trigger
  send_button(XBOX_BTN_LT, msg.lt);
  send_button(XBOX_BTN_RT, msg.rt);

  // dpad as button
  send_button(XBOX_DPAD_UP,    msg.dpad_up);
  send_button(XBOX_DPAD_DOWN,  msg.dpad_down);
  send_button(XBOX_DPAD_LEFT,  msg.dpad_left);
  send_button(XBOX_DPAD_RIGHT, msg.dpad_right);

  send_axis(XBOX_AXIS_LT, msg.lt);
  send_axis(XBOX_AXIS_RT, msg.rt);

  send_axis(XBOX_AXIS_TRIGGER, (int(msg.rt) - int(msg.lt)));

  // analog sticks
  send_axis(XBOX_AXIS_X1,  msg.x1);
  send_axis(XBOX_AXIS_Y1,  s16_invert(msg.y1));

  send_axis(XBOX_AXIS_X2,  msg.x2);
  send_axis(XBOX_AXIS_Y2,  s16_invert(msg.y2));

  // dpad as axis
  if      (msg.dpad_up)    send_axis(XBOX_AXIS_DPAD_Y, -1);
  else if (msg.dpad_down)  send_axis(XBOX_AXIS_DPAD_Y,  1);
  else                     send_axis(XBOX_AXIS_DPAD_Y,  0);

  if      (msg.dpad_left)  send_axis(XBOX_AXIS_DPAD_X, -1);
  else if (msg.dpad_right) send_axis(XBOX_AXIS_DPAD_X,  1);
  else                     send_axis(XBOX_AXIS_DPAD_X,  0);

  send_axis(XBOX_AXIS_A, msg.a);
  send_axis(XBOX_AXIS_B, msg.b);
  send_axis(XBOX_AXIS_X, msg.x);
  send_axis(XBOX_AXIS_Y, msg.y);
  send_axis(XBOX_AXIS_BLACK, msg.black);
  send_axis(XBOX_AXIS_WHITE, msg.white);
}

void
UInputConfig::send(Playstation3USBMsg& msg)
{
  // analog stick button
  send_button(XBOX_BTN_THUMB_L, msg.l3);
  send_button(XBOX_BTN_THUMB_R, msg.r3);

  // start/back button
  send_button(XBOX_BTN_START, msg.start);
  send_button(XBOX_BTN_GUIDE, msg.playstation);
  send_button(XBOX_BTN_BACK,  msg.select);

  // face button
  send_button(XBOX_BTN_A, msg.cross);
  send_button(XBOX_BTN_B, msg.circle);
  send_button(XBOX_BTN_X, msg.square);
  send_button(XBOX_BTN_Y, msg.triangle);

  send_button(XBOX_BTN_LB, msg.l1);
  send_button(XBOX_BTN_RB, msg.r1);

  // trigger
  send_button(XBOX_BTN_LT, msg.l2);
  send_button(XBOX_BTN_RT, msg.r2);

  // dpad as button
  send_button(XBOX_DPAD_UP,    msg.dpad_up);
  send_button(XBOX_DPAD_DOWN,  msg.dpad_down);
  send_button(XBOX_DPAD_LEFT,  msg.dpad_left);
  send_button(XBOX_DPAD_RIGHT, msg.dpad_right);

  send_axis(XBOX_AXIS_LT, msg.a_l2);
  send_axis(XBOX_AXIS_RT, msg.a_r2);

  send_axis(XBOX_AXIS_TRIGGER, (int(msg.a_r2) - int(msg.a_l1)));

  // analog sticks
  send_axis(XBOX_AXIS_X1, u8_to_s16(msg.x1));
  send_axis(XBOX_AXIS_Y1, u8_to_s16(msg.y1));
  
  send_axis(XBOX_AXIS_X2, u8_to_s16(msg.x2));
  send_axis(XBOX_AXIS_Y2, u8_to_s16(msg.y2));

  // dpad as axis
  if      (msg.dpad_up)    send_axis(XBOX_AXIS_DPAD_Y, -1);
  else if (msg.dpad_down)  send_axis(XBOX_AXIS_DPAD_Y,  1);
  else                     send_axis(XBOX_AXIS_DPAD_Y,  0);

  if      (msg.dpad_left)  send_axis(XBOX_AXIS_DPAD_X, -1);
  else if (msg.dpad_right) send_axis(XBOX_AXIS_DPAD_X,  1);
  else                     send_axis(XBOX_AXIS_DPAD_X,  0);

  send_axis(XBOX_AXIS_A, msg.a_cross);
  send_axis(XBOX_AXIS_B, msg.a_circle);
  send_axis(XBOX_AXIS_X, msg.a_square);
  send_axis(XBOX_AXIS_Y, msg.a_triangle);
  send_axis(XBOX_AXIS_BLACK, msg.a_l1);
  send_axis(XBOX_AXIS_WHITE, msg.a_r1);
}

void
UInputConfig::update(int msec_delta)
{
  m_btn_map.update(m_uinput, msec_delta);
  m_axis_map.update(m_uinput, msec_delta);

  m_uinput.sync();
}

void
UInputConfig::send_button(XboxButton code, bool value)
{
  if (button_state[code] != value)
  {
    button_state[code] = value;

    // in case a shift button was changed, we have to clear all
    // connected buttons
    for(int i = 1; i < XBOX_BTN_MAX; ++i) // iterate over all buttons
    {
      if (button_state[i])
      {
        const ButtonEventPtr& event = m_btn_map.lookup(code, static_cast<XboxButton>(i));
        if (event)
        {
          for(int j = 0; j < XBOX_BTN_MAX; ++j) // iterate over all shift buttons
          {
            m_btn_map.send(m_uinput, 
                           static_cast<XboxButton>(j), static_cast<XboxButton>(i), 
                           false);
          }
        }
      }
    }

    // Shifted button events
    for(int i = 1; i < XBOX_BTN_MAX; ++i)
    {
      if (button_state[i]) // shift button is pressed
      {
        if (m_btn_map.send(m_uinput, static_cast<XboxButton>(i), code, value))
        {
          // exit after the first successful event, so we don't send
          // multiple events for the same button
          return;
        }
      }
    }

    // Non shifted button events
    m_btn_map.send(m_uinput, code, value);
  }
}

void
UInputConfig::reset_all_outputs()
{
  // FIXME: kind of a hack
  Xbox360Msg msg;
  memset(&msg, 0, sizeof(msg));
  send(msg);
}

void
UInputConfig::send_axis(XboxAxis code, int32_t value)
{
  AxisEventPtr ev = m_axis_map.lookup(code);
  AxisEventPtr last_ev = ev;

  // find the curren AxisEvent bound to current axis code
  for(int shift = 1; shift < XBOX_BTN_MAX; ++shift)
  {
    if (button_state[shift])
    {
      AxisEventPtr new_ev = m_axis_map.lookup(static_cast<XboxButton>(shift), code);
      if (new_ev)
      {
        ev = new_ev;
        break;
      }
    }
  }
  
  // find the last AxisEvent bound to current axis code
  for(int shift = 1; shift < XBOX_BTN_MAX; ++shift)
  {    
    if (last_button_state[shift])
    {
      AxisEventPtr new_ev = m_axis_map.lookup(static_cast<XboxButton>(shift), code);
      if (new_ev)
      {
        last_ev = new_ev;
      }
      break;
    }
  }

  if (last_ev != ev)
  {
    // a shift key was released
    if (last_ev) last_ev->send(m_uinput, 0);
    if (ev) ev->send(m_uinput, value);
  }
  else
  {
    // no shift was touched, so only send events when the value changed
    if (axis_state[code] != value)
    {
      if (ev) ev->send(m_uinput, value);
    }
  }

  // save current value
  axis_state[code] = value;
}

/* EOF */
