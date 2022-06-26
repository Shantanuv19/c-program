//result accourding number
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter marks:- ";
	cin>>a;
	if(a<=100 && a>=90)
	{
		cout<<"O";
	}else if(a<90 && a>=80)
	{
		cout<<"E";
	}else if(a<80 && a>=70)
	{
		cout<<"A";
	}else if(a<70 && a>=60)
	{
		cout<<"B";
	}else if(a<60 && a>=50)
	{
		cout<<"C";
	}else if(a<50 && a>=40)
	{
		cout<<"D";
	}else if(a<40 && a>0)
	{
		cout<<"Fail";
	}else 
	cout<<"Envalid";
}
