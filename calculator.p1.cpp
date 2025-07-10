#include <iostream>
using namespace std;

int main()
{
	int d1, d2, result;
	char operand;
	cout<<"--------------------------------------------------\n";
	cout<<"WELCOME TO A SIMPLE CALCULATOR For Only 2 Digits\n";
	cout<<"--------------------------------------------------\n";
	cout<<"Enter the first digit: ";
	cin>>d1;
	cout<<"Enter the second digit ";
	cin>>d2;
	cout<<"Enter the operand you want to use(/, *, +, -): ";
	cin>>operand;
	if(operand='/') result=d1/d2;
	if(operand='*') result=d1*d2;
	if(operand='+') result=d1+d2;
	if(operand='-') result=d1-d2;
	cout<<d1<<operand<<d2<<"="<<result;
	return result;
	
}
