#include<iostream>
using namespace std;
int main()
{
    char ch;
    int ascii;
    cout<<"Enter a character: "<<endl;
    cin>> ch ;
    ascii = ch;

    cout<<"ASCII value of" << ch<<"is"<<ascii ;

    if (ascii >= 65 && ascii <= 90)
        cout <<ch<<" is a capital letter"<<endl;

    else if (ascii >= 97 && ascii <=122)
        cout<< ch<<  "  is a small letter"<< endl ;

    else if (ascii >=48 && ascii <= 57)
        cout << ch<<"is a digit"<< endl;

    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127)
    cout<<ch<<" is a special symbols"<<endl;

}


