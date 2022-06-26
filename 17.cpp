#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char ch[100]="a@gmail.com",ch1[100],p[100]="123",p1[100];
	cout<<"Enter the gmail:- ";
	gets(ch1);
	cout<<"Enter the pass:- ";
	gets(p1);
	if(strcmp(ch,ch1)==0 && strcmp(p,p1)==0)
	{
		cout<<"login...";
	}else
	cout<<"envalid";
	
}
