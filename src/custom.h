/*
    Copyright (C) 2009 Andrew Caudwell (acaudwell@gmail.com)

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version
    3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CUSTOMLOG_H
#define CUSTOMLOG_H

#include "commitlog.h"

class CustomLog : public RCommitLog {
protected:

    bool readCustomCommit(RCommit& commit);

    vec3f parseColour(std::string cstr);
    bool parseCommit(RCommit& commit);
public:
    CustomLog(std::string logfile);
};

#endif
