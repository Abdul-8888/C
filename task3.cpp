#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	string s1Name,s2Name;
	float s1Matric,s1Fsc,s1Ecat,s2Matric,s2Fsc,s2Ecat;



cout <<"*******************************************************************************"<<endl
       <<"*   		University  Admission  Management  System	              *"<<endl	
       <<"*******************************************************************************"<<endl
       <<endl
       <<"Main  Menu   >"<<endl
       <<"______________________________________________________"<<endl
       <<"Select one of the following option number. . . . ."<<endl
       <<"1 .  Add New Student Record"<<endl
       <<"2 .  View all Records"<<endl
       <<"3 .  Print the Record in Merit Order "<<endl
       <<"4 .  Generate Merit List"<<endl
       <<"5 .  Program Seat Management"<<endl
       <<"6 .  Exit"<<endl
       <<"Your OPtion . . . .";


	int option;
	cin >> option;

	if ( option == 1 )
	{
		cout << "Enter Student Name . . . ";
		cin >> s1Name;
		cout <<"Enter Matric Marks . . . ";
		cin >> s1Matric;
		cout << "Enter F.Sc Marks . . . ";
		cin >> s1Fsc;
		cout << "Enter ECAT Marks . . . ";
		cin >> s1Ecat;
	}
	if ( option == 2 )
	{
		cout << " You have no Student Record yet."<<endl;
	}
	if ( option == 3 )
	{
		cout << " You have no Student Record yet."<<endl;
	}

	cout <<"Press any Key to Cnotinue . .";
	char a;
	cin >> a;
	system("cls");




cout <<"*******************************************************************************"<<endl
       <<"*   		University  Admission  Management  System	              *"<<endl	
       <<"*******************************************************************************"<<endl
       <<endl
       <<"Main  Menu   >"<<endl
       <<"______________________________________________________"<<endl
       <<"Select one of the following option number. . . . ."<<endl
       <<"1 .  Add New Student Record"<<endl
       <<"2 .  View all Records"<<endl
       <<"3 .  Print the Record in Merit Order "<<endl
       <<"4 .  Generate Merit List"<<endl
       <<"5 .  Program Seat Management"<<endl
       <<"6 .  Exit"<<endl
       <<"Your OPtion . . . .";


	
	cin >> option;

	if ( option == 1 )
	{
		cout << "Enter Student Name . . . ";
		cin >> s2Name;
		cout <<"Enter Matric Marks . . . ";
		cin >> s2Matric;
		cout << "Enter F.Sc Marks . . . ";
		cin >> s2Fsc;
		cout << "Enter ECAT Marks . . . ";
		cin >> s2Ecat;
	}
	if ( option == 2 )
	{
		cout<<"NAME"<<"	"<<"	"<<"MATRIC"<<"	"<<"F.Sc"<<"	"<<"ECAT"<<endl;
		cout<<s1Name<<"	"<<"	"<<s1Matric<<"	"<<s1Fsc<<"	"<<s1Ecat;
	}
	if ( option == 3 )
	{
		cout << " You have no Student Record yet."<<endl;
	}

	cout <<"Press any Key to Cnotinue . .";
	
	cin >> a;
	system("cls");




cout <<"*******************************************************************************"<<endl
       <<"*   		University  Admission  Management  System	              *"<<endl	
       <<"*******************************************************************************"<<endl
       <<endl
       <<"Main  Menu   >"<<endl
       <<"______________________________________________________"<<endl
       <<"Select one of the following option number. . . . ."<<endl
       <<"1 .  Add New Student Record"<<endl
       <<"2 .  View all Records"<<endl
       <<"3 .  Print the Record in Merit Order "<<endl
       <<"4 .  Generate Merit List"<<endl
       <<"5 .  Program Seat Management"<<endl
       <<"6 .  Exit"<<endl
       <<"Your OPtion . . . .";


	
	cin >> option;

	if ( option == 1 )
	{
		cout << "Yu do not have More Space";
	                   
	}
	if ( option == 2 )
	{
		cout<<"NAME"<<"	"<<"	"<<"MATRIC"<<"	"<<"F.Sc"<<"	"<<"ECAT"<<endl;
		cout<<s1Name<<"	"<<"	"<<s1Matric<<"	"<<s1Fsc<<"	"<<s1Ecat<<endl;
		cout<<s2Name<<"	"<<"	"<<s2Matric<<"	"<<s2Fsc<<"	"<<s2Ecat;
	
	}
	if ( option == 3 )

	{
		float agregate1,agregate2;
		agregate1 =(s1Matric*20/1100)+(s1Fsc*50/1100)+(s1Ecat*30/400);
		agregate2 =(s2Matric*20/1100)+(s2Fsc*50/1100)+(s2Ecat*30/400);
		if( agregate1 > agregate2 )
	{                cout<<"NAME"<<"	"<<"	"<<"MATRIC"<<"	"<<"F.Sc"<<"	"<<"ECAT"<<"	"<<"AGREGATE"<<endl;
		cout<<s1Name<<"	"<<"	"<<s1Matric<<"	"<<s1Fsc<<"	"<<s1Ecat<<"	"<<agregate1;
		cout<<s2Name<<"	"<<"	"<<s2Matric<<"	"<<s2Fsc<<"	"<<s2Ecat<<"	"<<agregate2<<endl;
		
	                   }
	else
	{
	                 cout<<"NAME"<<"	"<<"	"<<"MATRIC"<<"	"<<"F.Sc"<<"	"<<"ECAT"<<"	"<<"AGREGATE"<<endl;
		cout<<s2Name<<"	"<<"	"<<s2Matric<<"	"<<s2Fsc<<"	"<<s2Ecat<<"	"<<agregate2<<endl;
		cout<<s1Name<<"	"<<"	"<<s1Matric<<"	"<<s1Fsc<<"	"<<s1Ecat<<"	"<<agregate1;
	}





	}
	cout <<endl;
	cout <<"Press any Key to Cnotinue . .";
	
	cin >> a;
	system("cls");




cout <<"*******************************************************************************"<<endl
       <<"*   		University  Admission  Management  System	              *"<<endl	
       <<"*******************************************************************************"<<endl
       <<endl
       <<"Main  Menu   >"<<endl
       <<"______________________________________________________"<<endl
       <<"Select one of the following option number. . . . ."<<endl
       <<"1 .  Add New Student Record"<<endl
       <<"2 .  View all Records"<<endl
       <<"3 .  Print the Record in Merit Order "<<endl
       <<"4 .  Generate Merit List"<<endl
       <<"5 .  Program Seat Management"<<endl
       <<"6 .  Exit"<<endl
       <<"Your OPtion . . . .";


	
	cin >> option;

	if ( option == 1 )
	{
		cout << "Yu do not have More Space";
	}
	if ( option == 2 )
	{
		cout<<"NAME"<<"	"<<"	"<<"MATRIC"<<"	"<<"F.Sc"<<"	"<<"ECAT"<<endl;
		cout<<s1Name<<"	"<<"	"<<s1Matric<<"	"<<s1Fsc<<"	"<<s1Ecat<<endl;
		cout<<s2Name<<"	"<<"	"<<s2Matric<<"	"<<s2Fsc<<"	"<<s2Ecat;
	
	}
	if ( option == 3 )
	{
		float agregate1,agregate2;
		agregate1 =(s1Matric*20/1100)+(s1Fsc*50/1100)+(s1Ecat*30/400);
		agregate2 =(s2Matric*20/1100)+(s2Fsc*50/1100)+(s2Ecat*30/400);
		
	if (agregate1 > agregate2 )
	{	 cout<<"NAME"<<"	"<<"	"<<"MATRIC"<<"	"<<"F.Sc"<<"	"<<"ECAT"<<"	"<<"AGREGATE"<<endl;
		cout<<s1Name<<"	"<<"	"<<s1Matric<<"	"<<s1Fsc<<"	"<<s1Ecat<<"	"<<agregate1;
		cout<<s2Name<<"	"<<"	"<<s2Matric<<"	"<<s2Fsc<<"	"<<s2Ecat<<"	"<<agregate2<<endl;
		
	                                }
	else
	{	 cout<<"NAME"<<"	"<<"	"<<"MATRIC"<<"	"<<"F.Sc"<<"	"<<"ECAT"<<"	"<<"AGREGATE"<<endl;
		cout<<s2Name<<"	"<<"	"<<s2Matric<<"	"<<s2Fsc<<"	"<<s2Ecat<<"	"<<agregate2<<endl;
		cout<<s1Name<<"	"<<"	"<<s1Matric<<"	"<<s1Fsc<<"	"<<s1Ecat<<"	"<<agregate1;
	
	                 }





}
}