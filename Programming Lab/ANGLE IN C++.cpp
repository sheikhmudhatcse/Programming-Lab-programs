#include<iostream>
#include <math.h>
using namespace std ;
int main()
{
    float degree, radian;
    float PI = 3.14159;

    cout<<"Enter angle in degree" << endl  ;
    cin>> degree  ;

    radian = degree * (PI / 180.0)        ;

    cout   << (sin(radian))<<endl  ;
    cout   << cos((radian)) <<endl  ;
    cout   << tan((radian)) <<endl;
    cout   << 1/sin((radian)) <<endl;
    cout   << 1/cos((radian)) <<endl;
    cout   << 1/tan((radian))<<endl;

    return 0;
}