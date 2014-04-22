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

#include "buttonfilter/const_button_filter.hpp"

#include <boost/lexical_cast.hpp>

ConstButtonFilter*
ConstButtonFilter::from_string(const std::string& str)
{
  return new ConstButtonFilter(boost::lexical_cast<bool>(str));
}

ConstButtonFilter::ConstButtonFilter(bool value) :
  m_value(value)
{
}

bool
ConstButtonFilter::filter(bool value)
{
  return m_value;
}

std::string
ConstButtonFilter::str() const
{
  std::ostringstream os;
  os << "const:" << m_value;
  return os.str();
}

/* EOF */
