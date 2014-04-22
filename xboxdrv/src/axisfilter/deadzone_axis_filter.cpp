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

#include "axisfilter/deadzone_axis_filter.hpp"

#include <boost/tokenizer.hpp>
#include <boost/lexical_cast.hpp>

DeadzoneAxisFilter*
DeadzoneAxisFilter::from_string(const std::string& str)
{
  int  min_deadzone = 0;
  int  max_deadzone = 0;
  bool smooth   = true;

  typedef boost::tokenizer<boost::char_separator<char> > tokenizer;
  tokenizer tokens(str, boost::char_separator<char>(":", "", boost::keep_empty_tokens));
  int idx = 0;
  for(tokenizer::iterator t = tokens.begin(); t != tokens.end(); ++t, ++idx)
  {
    switch(idx)
    {
      case 0:
        max_deadzone = boost::lexical_cast<int>(*t);
        min_deadzone = -max_deadzone;
        break;
        
      case 1:
        min_deadzone = -min_deadzone;
        max_deadzone = boost::lexical_cast<int>(*t); 
        break;

      case 2:
        smooth = boost::lexical_cast<bool>(*t); 
        break;

      default:
        throw std::runtime_error("to many arguments"); 
        break;
    }
  }

  return new DeadzoneAxisFilter(min_deadzone, max_deadzone, smooth);
}

DeadzoneAxisFilter::DeadzoneAxisFilter(int min_deadzone, int max_deadzone, bool smooth) :
  m_min_deadzone(min_deadzone),
  m_max_deadzone(max_deadzone),
  m_smooth(smooth)
{
}

int
DeadzoneAxisFilter::filter(int value, int min, int max)
{
  if (!m_smooth)
  {
    if (value < m_min_deadzone || m_max_deadzone < value)
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  else // (m_smooth)
  {
    if (value < m_min_deadzone)
    {
      return min * (value - m_min_deadzone) / (min - m_min_deadzone);
    }
    else if (value > m_max_deadzone) 
    {
      return max * (value - m_max_deadzone) / (max - m_max_deadzone);
    }
    else 
    {
      return 0;
    }
  }
}

std::string
DeadzoneAxisFilter::str() const
{
  std::ostringstream out;
  out << "deadzone:" << m_min_deadzone << ":" << m_max_deadzone << ":" << m_smooth;
  return out.str();
}

/* EOF */
