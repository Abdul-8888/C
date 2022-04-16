#include <iostream>
using namespace std;
main()
{

int x,y,z;

cout<<"Enter first integer:";
cin >>x;
cout<<"Enter second integer:";
cin >>y;
cout <<"Enter third integer:";
cin >>z;

if (x==y && y==z)
{
    cout <<"3";
}
else if (x==y || x==z || y==z)
{
    cout <<"2";
}
else
{
    cout <<"0";
}

}