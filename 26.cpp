#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter value:- ";
	cin>>a;
	switch(a)
	{
		case 1: cout<<"Sunday";break;
		case 2: cout<<"Mon"; break;
		case 3: cout<<"Tuesday"; break;
		case 4: cout<<"Wednesday"; break;
		case 5: cout<<"Thuresday"; break;
		case 6: cout<<"Friday"; break;
		case 7: cout<<"Saturday"; break;
		default: cout<<"Envalid";
	}
}
