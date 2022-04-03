#include <iostream>
using namespace std;
main()
{
	float salary, laptopPrice,advance,Tadvance,month;
	cout << "Enter the Total Salary : ";
	cin >> salary;
	
	advance = salary /2;
	Tadvance = advance*6;

	laptopPrice = 50000;
	laptopPrice = laptopPrice - Tadvance;

	month = laptopPrice/advance;
		
	int months;
	months = month;
	month = month - months;
	month = month * 30;
	int days;
	days = month;
	if (Tadvance >= 50000)
	{ cout << " You can buy A Laptop with your 6 month Advance Salary";
	}
	else 
	{
		cout << "you have to work more "<<months<<" months and "<<days<<"days .";	

	}



}