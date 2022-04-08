#include <iostream>
using namespace std;
main ()
{
	
	int holiday;
	float time , games ,difference , differ;

	cout <<"Enter Holidays . . . ";
	cin >> holiday;
	time = 365 - holiday;
	games = (holiday*127)+(time*63);
	difference = 30000 - games;
	differ = difference;
		

	





	if (differ >0 )
	{difference = difference/60;	
	
	int hour;
	hour = difference;
	 difference = difference - hour;
	difference = difference * 60;
	int minutes;
	minutes = difference;

		cout << "Tom Sleeps well"<<endl
		        <<hour<<" hours and "<<minutes<<" minutes .";	
	}
	else
	{  difference = (difference/60)*-1;	

	int hour;
	hour = difference;
	 difference = difference - hour;
	difference = difference * 60;
	int minutes;
	minutes = difference;

		cout << "Tom will run away. "<<endl
		 <<hour<<" hours and "<<minutes<<" minutes .";	
		


}
		


}