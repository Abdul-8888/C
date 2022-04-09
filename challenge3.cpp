#include <iostream>
using namespace std;
main()
{

string day,month;
int purchase,payable;

cout<<"Enter day:";
cin >>day;
cout<<"Enter month";
cin >>month;
cout <<"Enter purchase amount";
cin >>purchase;

if (day=="Sunday")
{
    if (month=="October" || month=="March")
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

cout <<"Your bill is"<<payable;

}