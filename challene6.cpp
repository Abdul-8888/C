#include <iostream>
using namespace std;
main()
{

int weight,price,increase,over;
string standard;

cout<<"Enter weight of luggage:";
cin >>weight;
cout<<"Enter travelling class:";
cin >>standard;

if (standard=="business")
{
    price=15000;
    if (weight > 40)
    {
        over=weight-40;
        increase= over*1000;
        price= price + increase;
    }
    
}

else if (standard=="economy")
{
    price=8000;
    if (weight>25)
    {
        over=weight - 25;
        increase= over*500;
        price= price + over;
    }
    
}

cout <<"You need to pay"<<price;

}