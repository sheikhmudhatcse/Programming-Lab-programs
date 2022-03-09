#include<iostream>
using namespace std;
 main()
{
	double C,S,P,L;
    cout<<"Enter cost price of an item: "<<endl ;
    cin>>C    ;
    cout << "Enter Selling price of the same: "<< endl ;
    cin>>S;
    if(S>C)
    {
        P=S-C;
        cout << "Seller made profit of Rs." <<P  << endl ;
    }
    else if(C>S)
    {
        L=C-S;
        cout << "Seller incurred loss of Rs." <<L<< endl ;
    }
    else if(S==C)
    cout << "Seller made no loss no profit" << endl ;
}