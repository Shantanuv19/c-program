#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	static int amount=5000;
	int a, pass=123, up, credit;
	do{
		cout<<endl<<"1> Credit "<<endl;
		cout<<"2> Withdraw"<<endl;
		cout<<"3> amount"<<endl;
		cout<<"4>Exit"<<endl;
		cout<<"Ener your choice:- ";
		cin>>a;
		switch(a){
			case 1:{
				cout<<"Enter your password:- ";
				cin>>up;
				if(up==pass)
				{
					cout<<"Enter amount for credit:- ";
					cin>>credit;
					amount+=credit;
					cout<<"Now your Available amount is:- "<<amount;
				}
				break;
			}
			case 2:{
				cout<<"Enter your password:- ";
				cin>>up;
				if(pass==up)
				{
					cout<<"Enter amount for withdraw:- ";
					cin>>credit;
					if(amount-credit<0)
					{
						cout<<credit<<"  amount is available";
					}else{
						amount-=credit;
					cout<<"Now your Available amount is:- "<<amount;
					}
				}
				break;
			}
			case 3:{
				cout<<"Enter your password:- ";
				cin>>up;
				if(pass==up)
				{
					cout<<"Available amount is:- "<<amount;
				}
				break;
			}
			case 4: cout<<"Exit";
		}
	}while(a!=4);
	
}
