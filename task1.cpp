#include <iostream>
using namespace std;
main ()
{
	string countryName;
	float ticPrice , discount;
	cout <<"Enter Country Name . . . ";
	cin >> countryName;

	cout <<"Enter Ticket Price . . . ";
	cin >> ticPrice;

	if (countryName == "Ireland")
	{	discount = ticPrice*5/100;
		ticPrice = ticPrice - discount;
		cout << "Discounted Price is . . . "<<ticPrice;
	}
	else
	{  	discount = ticPrice*10/100;
		ticPrice = ticPrice - discount;
		cout << "Discounted Price is . . . "<<ticPrice;
	}
		


}