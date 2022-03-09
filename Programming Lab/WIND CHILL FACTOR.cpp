#include<iostream>
#include<math.h>
using namespace std ;
 main()
{
    int t,v;
    float wcf;
    cout<<  "Enter Temperature and Velocity "<< endl     ;
    cin >>  t >>  v  ;

    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16)      ;
    cout<<"By the given formula the answer is "<< wcf    ;

}
