#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter value:- ";
	cin>>a;
	if(a>=65 && a<=90 || a>=97&& a<=122)
	{
		cout<<"Alphabates";
	}else if(a>=48 && a<=57)
	{
		cout<<"digit";
	}else
	{
		cout<<"symbals";
	}
}
