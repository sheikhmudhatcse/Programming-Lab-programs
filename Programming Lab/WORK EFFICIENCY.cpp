#include<iostream>
using namespace std;
main()
{
 float time;
 cout<<"Enter the time taken by the worker in hours (hh.mm) :- "<<endl;
 cin>> time ;
 if(time>=2.00 && time<=3.00)
 cout<< "This worker is highly efficient." <<endl;
 else if(time>3.00 && time<=4.00)
 cout << "This worker is ordered to improve speed."<<endl;
 else if(time>4.00 && time<=5.00)
 cout<< "This worker is given training to improve his speed. "<<endl;
 else
 cout<< "This worker has to leave the company.";
}