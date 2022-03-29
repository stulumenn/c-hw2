#include <iostream>
using namespace std;

int main()
{
	double baseNumber=0;
	int exponent=0;
	int i=1;
	
	cout<<"Enter the number.\n";
	cin>>baseNumber;
	double temp = baseNumber;
	cout<<"Enter the exponent.\n";
	cin>>exponent;
	
	if (exponent == 0)
	{
		cout << "Result is: ";
		cout<< '1';
	}
	if (exponent > 0){
		while (i < exponent)
		{
			baseNumber = baseNumber * temp;
			i++;
		}
		cout << "Result is: ";
		cout << baseNumber;
	}
	
	if (exponent < 0)
	{
		while (i < -exponent)
		{
			baseNumber = baseNumber * temp;
			i++;
		}
		baseNumber = 1/baseNumber;
		cout << "Result is: ";
		cout << baseNumber;
	}
	result 0;
}
