#include <iostream>
using namespace std;
main()
{

string month,day;
int purchase,payable;

cout<<"Enter day:";
cin >>day;
cout<<"Enter month:";
cin >>month;
cout <<"Enter purchase amount:";
cin >>purchase;

if (month=="October")
{
    if (day=="Sunday")
    {
        payable= purchase - purchase*0.1;
    }
    else
    {
        payable=purchase;
    }
}
else if (month=="November")
{
    if (day=="Thursday")
    {
        payable= purchase - purchase*0.1;
    }
    else
    {
        payable=purchase;
    }
    
}
else
{
    payable=purchase;
}

cout <<"Your bill is "<<payable;

}