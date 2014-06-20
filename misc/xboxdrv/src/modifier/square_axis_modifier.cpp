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

#include "square_axis_modifier.hpp"

#include <math.h>
#include <sstream>

#include "helper.hpp"

namespace {

void squarify_axis(int& x_inout, int& y_inout)
{
  if (x_inout != 0 || y_inout != 0)
  {
    // Convert values to float
    float x = (x_inout < 0) ? static_cast<float>(x_inout) / 32768.0f : static_cast<float>(x_inout) / 32767.0f;
    float y = (y_inout < 0) ? static_cast<float>(y_inout) / 32768.0f : static_cast<float>(y_inout) / 32767.0f;

    // Transform values to square range
    float l = sqrtf(x*x + y*y);
    float v = fabsf((fabsf(x) > fabsf(y)) ? l/x : l/y);
    x *= v;
    y *= v;

    // Convert values to int
    x_inout = static_cast<int>(Math::clamp(-32768, static_cast<int>((x < 0) ? x * 32768 : x * 32767), 32767));
    y_inout = static_cast<int>(Math::clamp(-32768, static_cast<int>((y < 0) ? y * 32768 : y * 32767), 32767));
  }
}

} // namespace


SquareAxisModifier*
SquareAxisModifier::from_string(const std::vector<std::string>& args)
{
  if (args.size() != 2)
  {
    throw std::runtime_error("SquareAxisModifier requires two arguments");
  }
  else
  {
    return new SquareAxisModifier(string2axis(args[0]),
                                  string2axis(args[1]));
  }
}

SquareAxisModifier::SquareAxisModifier(XboxAxis xaxis, XboxAxis yaxis) :
  m_xaxis(xaxis),
  m_yaxis(yaxis)
{
}

void
SquareAxisModifier::update(int msec_delta, XboxGenericMsg& msg)
{
  int x = get_axis(msg, m_xaxis);
  int y = get_axis(msg, m_yaxis);

  squarify_axis(x, y);

  set_axis(msg, m_xaxis, x);
  set_axis(msg, m_yaxis, y);
}

std::string
SquareAxisModifier::str() const
{
  std::ostringstream out;
  out << "square"
      << axis2string(m_xaxis)
      << ":"
      << axis2string(m_yaxis);
  return out.str();
}

/* EOF */
