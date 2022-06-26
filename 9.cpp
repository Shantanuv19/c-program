#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 1st value:- ";
	cin>>a;
	cout<<"Enter 2nd value:- ";
	cin>>b;
	c=a+b;
	b=c-b;
	a=c-a;
	cout<<"After swaping:- "<<a<<ends<<b;
}
