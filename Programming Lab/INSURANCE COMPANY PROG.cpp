#include<iostream>
using namespace std;
#include<conio.h>
int main ()

{

int age,premium, max_amount;

char health, location, sex;

cout<<"Enter Health - g for good / b for bad\nEnter Location - c for city / v for village";

cout<<"\nEnter sex - m for male / f for female";

cout<<"\nEnter the health, age, location and sex of the person:";

cin>>health>>age>>location>>sex;

if ((health=='g') && ((age>=25)&&(age<=35)) && (location=='c') && (sex=='m'))

{

premium=4;

max_amount=2;

cout<<"This person is insured.\nThe payable premium is Rs. %d per thousand\n and the max policy amount is Rs. %d Lakhs", premium, max_amount;

}

else if ((health=='g') && ((age>=25)&&(age<=35)) && (location=='c') && (sex=='f'))

{

premium=3;

max_amount=1;

cout<<"This person is insured.\nThe payable premium is Rs. %d per thousand\nand the max policy amount is Rs. %d Lakhs", premium, max_amount;

}

else if ((health=='b') && ((age>=25)&&(age<=35)) && (location=='v') && (sex=='m'))

{

premium=6;

max_amount=10000;

cout<<"This person is insured.\nThe payable premium is Rs. %d per thousand \nand the max policy amount is Rs. %d ", premium, max_amount;

}

else

{

cout<<"This person is not insured.";

}
}
