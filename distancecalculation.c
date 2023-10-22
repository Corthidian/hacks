#include <stdio.h>
#include <math.h>
#define EARTH_RADIUS 6371.0
double to radians (double degrees)
{
    return degrees * M_PI/180.0;
}
double computeDistance (double lat1,double lon1,double lat2,double lon2)
{
    
    lat1 = toRadian(lat1);
    lat2 = toRadian(lat2);
    lon1 = toRadian(lon1);
    lon2 = toRadian(lon2);
    double dlon = lon2 - lon1;
    
    return EARTH_RADIUS * (acos sin(lat1) *sin(lat2) + cos(lat2) * cos(lat1) * cos(dlon));
}



