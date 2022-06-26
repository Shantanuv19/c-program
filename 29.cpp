#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	cout<<"Enter 1st number:- ";
	cin>>a;
	cout<<"Enter 2nd number:- ";
	cin>>b;
	cout<<"Enter operator:- ";
	cin>>c;
	switch(c){
		case '+': cout<<a+b; break;
		case '-': cout<<a-b;  break;
		case '*': cout<<a*b; break;
		case '/': cout<<a/b; break;
		default: cout<<"Envalid";
	}
}
