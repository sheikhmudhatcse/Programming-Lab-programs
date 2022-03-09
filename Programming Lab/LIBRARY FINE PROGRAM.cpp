#include<iostream>
using namespace std;
 main()
{
	float chrg;
	int lat;
	
	cout << "Enter the days you're late : "<< endl ;
	cin >> lat  ;
	
	if(lat<=5)
		chrg=0.50;
		
	if(lat>5 && lat<11)
		chrg=1.0;
	
	if(lat>10 && lat<31)
		chrg=5.0;
		
	if(lat>30)
	cout <<	"\n\nYour library membership has been cancelled de to over delay to returning the book."<< endl ;
		
	cout << "\n\nYour library charges are Rs" << chrg << endl  ;
	
}