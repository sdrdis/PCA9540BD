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

#include <PCA9540BD.h>
#include <Wire.h>


PCA9540BD::PCA9540BD()
{
	Wire.begin();
}

void PCA9540BD::selectChannel(bool channelId)
{
    Wire.beginTransmission(PCA9540BD::ADDRESS);
	Wire.write(PCA9540BD::CHANNEL_0 + channelId);
	Wire.endTransmission(); 
}
