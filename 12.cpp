#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter 1st val:- ";
	cin>>a;
	cout<<"Enter 2nd val:- ";
	cin>>b;
	cout<<"enter 3rd val:- ";
	cin>>c;
	d=a>(b>c?b:c)?a:(b>c?b:c);
	cout<<"Greater among three is:- "<<d;
}
