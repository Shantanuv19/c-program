#include<iostream>
using namespace std;
int main()
{
	int b,sum=1;
	cout<<"enter any number:- ";
	cin>>b;
	for(int a=1; a<=b; a++)
	sum*=a;
	cout<<"Factorial of no is:- "<<sum;
}
