/********************************************************************************
* PCA9540B Library Examples- basic.ino                                          *
*                                                                               *
* Copyright (C) 2015 Sébastien Drouyer                                          *
*                                                                               *
* License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html> *
* This is free software: you are free to change and redistribute it.            *
* There is NO WARRANTY, to the extent permitted by law.                         *
*                                                                               *
*********************************************************************************/

#include <Wire.h>
#include <PCA9540BD.h>

PCA9540BD multiplexer;

void setup()
{
    multiplexer.selectChannel(0); // for selecting SD0 and SC0
    multiplexer.selectChannel(1); // for selecting SD1 and SC1
}

void loop() {
    
}