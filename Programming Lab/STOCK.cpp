#include<iostream>
using namespace std;
int main()
{

    int stock=100, order;
    char credit,cr;

    cout << "Enter the customer order: "<< endl ;
    cin >> order;
    
    cout << "Is his credit is ok? (Press y/n)\n"<< endl ;
    cin>>credit;

    
    if(order<=stock && credit == 'y' || credit == 'Y') 
        cout << "Sir,\n\t We supplied your requirement\n\t\t Quantity:" <<order<< endl;


    else if(order>stock && credit == 'y' || credit == 'Y')
        cout << "Sir,\n\t We supplied" << stock<< "products and balance will be shipped later.";

    
    else
        cout << "Sir,\n\t Please first clear your credit, until we can't supply you any more." << endl;
}