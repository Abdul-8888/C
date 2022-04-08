#include <iostream>
using namespace std;
main ()
{
	
	string shape;
	

	cout <<"Enter Shape . . . ";
	cin >> shape;

	if (shape == "square")
	{	float area ,side;
		cout << "The length of side is . . ";
		cin >> side;
		area = side*side;
		cout << "The Area is . . "<<area;	

	}
	else if (shape == "rectangle")
	{	float area ,length,width;
		cout << "The length of side is . . ";
		cin >> length;
		cout << "The width of side is . . ";
		cin >> width;
		area = length*width;
		cout << "The Area is . . "<<area;	

	}
	else if (shape == "circle")
	{	float area ,radius;
		cout << "The Radius is . . ";
		cin >> radius;
		area = radius*3.14*radius;
		cout << "The Area is . . "<<area;	

	}	
	else if (shape == "triangle")
	{	float area ,base,height;
		cout << "The length of base is . . ";
		cin >> base;
		cout << "The length of height is . . ";
		cin >> height;
		area = base*height*.5;
		cout << "The Area is . . "<<area;	

	}

}