/*
* Copyright (C) 2001-2018 Jacek Sieka, arnetheduck on gmail point com
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifndef DCPLUSPLUS_DCPP_TIMERMANAGER_LISTENER_H_
#define DCPLUSPLUS_DCPP_TIMERMANAGER_LISTENER_H_


#include <stdint.h>

namespace dcpp {

class TimerManagerListener {
public:
	virtual ~TimerManagerListener() { }
	template<int I>	struct X { enum { TYPE = I }; };

	typedef X<0> Second;
	typedef X<1> Minute;

	virtual void on(Second, uint64_t) noexcept { }
	virtual void on(Minute, uint64_t) noexcept { }
};

}

#endif