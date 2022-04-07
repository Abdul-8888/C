#include <iostream>
using namespace std;
main ()
{
	
	float temp1 , temp2 ,difference;
	
	cout <<"Enter Temperature 1 . . . ";
	cin >> temp1;
	cout <<"Enter Temperature 2 . . . ";
	cin >> temp2;

	difference = temp1 -temp2;
	if ( difference >= 10)
	{	
		cout << "Difference is too Big"<<endl;
	}
	cout << "Program Ends";
		


}