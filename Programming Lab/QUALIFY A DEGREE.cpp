#include<iostream>
using namespace std ;
main()
{
int a,b;
cout << "Enter the marks obtained in A and B respectively\n"<<endl;
cin>>a>>b;
if((a>=55&&b>=45)||(a<55&&a>=45&&b>=55))
cout << "Your are passed\n"<< endl ;
else if(a>=65&&b<=45)
cout << "You have to appear in Re-exam for subject B\n"<<endl   ;
else
cout<< "You are failed,better luck next time\n"<<endl;
} 