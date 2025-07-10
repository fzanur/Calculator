#include <iostream>
#include <sstream> //for using stringstream for converting string to float
using namespace std;

main()
{
	float num, result=0;
	char operand;
	bool first=true;
	cout<<"----------------------------------\n";
	cout<<"WELCOME TO A SIMPLE CALCULATOR\n";
	cout<<"----------------------------------\n";

	cout<<"Enter the operand you want to use(/, *, +, -): ";
	cin>>operand;
	
	cout<<"Enter the digits one by one (press = to calculate): ";
	while (true)
	{
		string input;
		cin>>input; 
		if(input=="=") break;
		
		stringstream ss(input);//converts string to float
		ss>>num;	
			
		if(first) 
		{
			/*setting first number as result so the operation can be performed 
			e.g; result has been initialized as zero so without this the first value will be zero instead of what user enters*/
			result=num; 
			first=false;//allows us to move to the next number
		}
		else//first=false
		{
			if(operand=='/') 
			{
				if (num==0)
				{
					cout<<"ERROR! Division with zero.";
					return 1;
				}
				else
				{
					result/=num;
				}
				
			}
			
			
			else if(operand=='*') 
			{
				result*=num;
			}
			else if(operand=='+') result+=num;
			else if(operand=='-') result-=num;
			else
			{
				cout<<"Invalid operand..";
				return 1;
			}
		}
	
	}
	cout<<"Result: "<<result;	
	return 0;
}
