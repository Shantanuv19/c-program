#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter any chara:- ";
	cin>>c;
	switch(c){
		case 'a':
		case 'e': case 'i':case 'o':case 'u':
		cout<<"vowel";
		default: cout<<"Consonents";
	}
}
