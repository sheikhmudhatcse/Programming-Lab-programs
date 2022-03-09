#include<iostream>
#include<math.h>
using namespace std;
 main()
{
    int x, y, z ,valid=0 ;   
    int max, flag=0;
    cout <<"Enter the first side: "<<endl;
    cin >> x   ;
    cout<< "Enter the second side: "<<endl;
    cin>>y;
    cout<<"Enter the third side: "<<endl;
    cin>> z  ;
    

    max = x;

    if(max<y)
        max=y;

    if(max<z)
        max=z;
        
    if(max == x && x < (y+z))
        valid = 1;

    if(max == y && y < (x+z))
        valid = 1;

    if(max == z && z < (x+y))
        valid = 1;

if (valid==1)
    cout<< "Triangle is valid"<< endl ;
else
    cout<<"Triangle is not valid"<< endl ;
}