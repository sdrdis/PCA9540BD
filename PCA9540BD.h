/*****************************************************************************
* PCA9540BD Library - PCA9540BD.cpp                                          *
*                                                                            *
* Copyright (C) 2015 Sébastien Drouyer                                       *
*                                                                            *
* This program is free software: you can redistribute it and/or modify       *
* it under the terms of the GNU General Public License as published by       *
* the Free Software Foundation, either version 3 of the License, or          *
* (at your option) any later version.                                        *
*                                                                            *
* This program is distributed in the hope that it will be useful,            *
* but WITHOUT ANY WARRANTY; without even the implied warranty of             *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
* GNU General Public License for more details.                               *
*                                                                            *
* You should have received a copy of the GNU General Public License          *
* along with this program.  If not, see <http://www.gnu.org/licenses/>.      *
*                                                                            *
******************************************************************************/

#ifndef _PCA9540BD_H
#define _PCA9540BD_H

#include <Arduino.h>

class PCA9540BD
{
	private:
		/* PCA9540BD Registers */
		enum info_t 
		{
			CHANNEL_0 = 0x04,
			ADDRESS   = 0x70
		};
	
	public:

		PCA9540BD();
		void selectChannel(bool channelId);
};

#endif // _PCA9540BD_H
