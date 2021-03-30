/**
 * Math helper functions
 */
#include "Math.h"

/**
 * Convert Degrees to Radians
 */
float DegToRad(float degrees)
{
    return degrees / 180.0 * M_PI;
}

/**
 * Convert Rad to Deg
 */
float RadToDeg(float radians)
{
    return radians / M_PI * 180.0;
}
