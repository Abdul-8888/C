#include <iostream>
using namespace std;
main()
{
	float num1, num2;
	char opr;

	cout << "Enter 1st number : ";
	cin >> num1;
	cout << "Enter Operation : ";
	cin >> opr;
	cout << "Enter 2nd number : ";
	cin >> num2;
	if (opr == '+')
	{
		num1 = num1-num2;
		cout << "Substraction is : " << num1;	

	}
	
       if (opr == '-')
	{
		num1 = num1+num2;
		cout << "Addition is : " << num1;	

	}

	if  (opr == '*')
	{
		num1 = num1/num2;
		cout << "Division is : " << num1;	

	}

	if (opr == '/')
	{
		num1 = num1*num2;
		cout << "Multiplication is : " << num1;	

	}





}