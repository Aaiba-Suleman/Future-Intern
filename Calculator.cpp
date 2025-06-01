#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	float a,b;
	char o;
	float sum, div, mul, sub;
	
	cout<<"\t\t\t Calculator";
	cout<<"\n Enter 1st value: ";
	cin>>a;
	cout<<" Enter 2nd value: ";
	cin>>b;
	cout<<" Enter Operator like +,-,*,/: ";
	cin>>o;
	
	switch(o)
	{
		case '+':
			sum=a+b;
			cout<<" Sum = "<<sum;
			break;
		case '-':
			sub=a-b;
			cout<<" Subtract = "<<sub;
			break;
			case '*':
			mul=a*b;
			cout<<" Multiple = "<<mul;
			break;
			case '/':
			div=a/b;
			cout<<" Division = "<<div;
			break;
			default:
				cout<<"Invalid operator symbol you enter please try again..";
	}
	int n;
	cout<<"\n Enter 1 for main menu: ";
	cin>>n;
	if(n==1)
	{
		return main();
	}
	else
	{
		cout<<"Try Again.";
	}
}
