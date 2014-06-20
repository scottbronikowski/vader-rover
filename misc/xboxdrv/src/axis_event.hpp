/*
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2010 Ingo Ruhnke <grumbel@gmx.de>
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

#ifndef HEADER_XBOXDRV_AXIS_EVENT_HPP
#define HEADER_XBOXDRV_AXIS_EVENT_HPP

#include <boost/scoped_ptr.hpp>

#include "axis_filter.hpp"
#include "ui_event.hpp"

class UInput;
class AxisEvent;
class AxisEventHandler;

typedef boost::shared_ptr<AxisEvent> AxisEventPtr;

class AxisEvent
{
public:
  static AxisEventPtr invalid();

  static AxisEventPtr create_abs(int device_id, int code, int min, int max, int fuzz, int flat);
  static AxisEventPtr create_rel(int device_id, int code, int repeat = 10, float value = 5);

  /** If an AxisEvent gets created the user has to set min/max with set_axis_range() */ 
  static AxisEventPtr from_string(const std::string& str);

public:
  AxisEvent(AxisEventHandler* handler, int min = 0, int max = 0);
  ~AxisEvent() {}

  void add_filter(AxisFilterPtr filter);

  void init(UInput& uinput, int slot, bool extra_devices);
  void send(UInput& uinput, int value);
  void update(UInput& uinput, int msec_delta);

  void set_axis_range(int min, int max);

  std::string str() const;

private:
  int  m_last_raw_value;
  int  m_last_send_value;
  int  m_min;
  int  m_max;
  boost::scoped_ptr<AxisEventHandler> m_handler;
  std::vector<AxisFilterPtr> m_filters;
};

class AxisEventHandler
{
protected:
  int m_min;
  int m_max;

public:
  AxisEventHandler();
  virtual ~AxisEventHandler() {}

  virtual void init(UInput& uinput, int slot, bool extra_devices) =0;
  virtual void send(UInput& uinput, int value) =0;
  virtual void update(UInput& uinput, int msec_delta) =0;

  virtual void set_axis_range(int min, int max);

  virtual std::string str() const =0;
};

#endif

/* EOF */
