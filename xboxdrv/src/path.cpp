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

#include "path.hpp"

namespace path {

std::string dirname(const std::string& filename)
{
  std::string::size_type p = filename.rfind('/');
  if (p == std::string::npos)
  {
    return "./";
  }
  else
  {
    return filename.substr(0, p+1);
  }
}

std::string join(const std::string& lhs, const std::string& rhs)
{
  if (lhs.empty())
  {
    return rhs;
  }
  else
  {
    if (lhs[lhs.size()-1] == '/')
    {
      return lhs + rhs;
    }
    else
    {
      return lhs + '/' + rhs;
    }
  }
}

} // namespace path

/* EOF */
