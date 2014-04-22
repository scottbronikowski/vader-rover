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

#include "exec_button_event_handler.hpp"

#include <boost/tokenizer.hpp>
#include <errno.h>
#include <string.h>

#include "log.hpp"

ExecButtonEventHandler*
ExecButtonEventHandler::from_string(const std::string& str)
{
  std::vector<std::string> args;

  typedef boost::tokenizer<boost::char_separator<char> > tokenizer;
  tokenizer tokens(str, boost::char_separator<char>(":", "", boost::keep_empty_tokens));

  std::copy(tokens.begin(), tokens.end(), std::back_inserter(args));

  return new ExecButtonEventHandler(args);
}

ExecButtonEventHandler::ExecButtonEventHandler(const std::vector<std::string>& args) :
  m_args(args)
{
}

void
ExecButtonEventHandler::init(UInput& uinput, int slot, bool extra_devices)
{
  // nothing to do
}

void
ExecButtonEventHandler::send(UInput& uinput, bool value)
{
  if (value)
  {
    pid_t pid = fork();
    if (pid == 0)
    {
      char** argv = static_cast<char**>(malloc(sizeof(char*) * (m_args.size() + 1)));
      for(size_t i = 0; i < m_args.size(); ++i)
      {
        argv[i] = strdup(m_args[i].c_str());
      }
      argv[m_args.size()] = NULL;

      if (execvp(m_args[0].c_str(), argv) == -1)
      {
        log_error("exec failed: " << strerror(errno));
        _exit(EXIT_FAILURE);
      }
    }
  }
}

std::string
ExecButtonEventHandler::str() const
{
  return "exec";
}

/* EOF */
