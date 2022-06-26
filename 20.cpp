// profit and loss
#include<iostream>
using namespace std;
int main()
{
	int p,r,val;
	cout<<"Enter the cost:- ";
	cin>>p;
	cout<<"Enter the sell:- ";
	cin>>r;
	if(r-p>0)
	cout<<"profit:- "<<r-p;
	else
	cout<<"loss:- "<<r-p;
}
