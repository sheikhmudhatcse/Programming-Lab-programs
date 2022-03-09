#include<iostream>
using namespace std ;
int main()
{
    
    float h, cc, ts;

    int h_f=0, cc_f=0, ts_f=0;  
    int grade;
    cout << "Enter the value of Hardness: "  ;
    cin >> h ;

    cout<<"Enter the value of Carbon Content: "<< endl ;
    cin>> cc ;

    cout<<"Enter the value of Tensile Strength: "<<endl;
    cin>> ts;

    
    if (h>50)
        h_f=1;
    if (cc<0.7)
        cc_f=1;
    if (ts>5600)
        ts_f=1;
        
    if(h_f==0 && cc_f==0 && ts_f==0)
        grade = 5;


    if(h_f==1 || cc_f==1 || ts==1)
        grade = 6;

    if(h_f==1 && cc_f==0 && ts_f==1)
        grade = 7;

    if(h_f==0 && cc_f==1 && ts_f==1)
        grade = 8;
        
    if(h_f==1 && cc_f==1 && ts_f==0)
        grade = 9;

    if(h_f==1 && cc_f==1 && ts_f==1)
        grade = 10;

    cout<< "The grade of steel is   %d"<<grade<<endl;
}