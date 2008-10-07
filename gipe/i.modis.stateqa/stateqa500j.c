/* BRDF correction performed unsigned int bits[14]
 * 0 -> class 0: Yes
 * 1 -> class 1: No
 */  

#include "grass/gis.h"

CELL stateqa500j(CELL pixel) 
{
    CELL qctemp;

    pixel >> 14;
    qctemp = pixel & 0x01;

    return qctemp;
}


