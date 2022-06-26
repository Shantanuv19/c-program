#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter 1st value:- ";
	cin>>a;
	cout<<"Enter 2nd value:- ";
	cin>>b;
	cout<<"Enter 3rd value:- ";
	cin>>c;
	if(a>b &&a>c)
	{
		cout<<"A is greater";
	}else if(b>a && b>c)
	{
		cout<<"B is greater";
	}else if(c>a && c>b)
	{
		cout<<"C is greater";
	}
}
