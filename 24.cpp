#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a;
	cout<<"Enter any char:- ";
	cin>>a;
	if(a>='A' && a<='Z')
	{
		cout<<(char)(a+26);
	}else
	{
		cout<<(char)(a-26);
	}
}
