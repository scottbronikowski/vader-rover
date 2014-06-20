/* 
**  Xbox360 USB Gamepad Userspace Driver
**  Copyright (C) 2008 Ingo Ruhnke <grumbel@gmx.de>
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

#ifndef HEADER_MODIFIER_HPP
#define HEADER_MODIFIER_HPP

#include <boost/shared_ptr.hpp>

#include "xboxmsg.hpp"

class Modifier;
class Options;

typedef boost::shared_ptr<Modifier> ModifierPtr;

class Modifier
{
public:
  static Modifier* from_string(const std::string& name, const std::string& value);

public:
  virtual ~Modifier() {}
  virtual void update(int msec_delta, XboxGenericMsg& msg) = 0;

  virtual std::string str() const = 0;
};

#endif

/* EOF */
