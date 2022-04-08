#include <iostream>
using namespace std;
main ()
{
	
	int redRose , whiteRose , tulips;
	float total, discount;

	cout <<"Red Roses . . . ";
	cin >> redRose;

	cout <<"White Roses . . . ";
	cin >> whiteRose;

	cout <<"Tulips . . . ";
	cin >> tulips;
	
	total = (redRose*2)+(whiteRose*4.10)+(tulips*2.50);
	

	if (total > 200)
	{	discount = total*20/100;
		discount = total - discount;
		cout << "Original Price is . . . "<<total<<endl;
		cout << "Price after Discount is . . . "<<discount;
	}
	else
	{  	cout << "Original Price is . . . "<<total;
	}
		


}