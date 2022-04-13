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

if (day=="Sunday")
{
    if (month=="March" || month=="August" || month=="October")
    {
        payable= purchase - purchase*0.1;
    }
    else
    {
        payable=purchase;
    }
   
}
else if (day=="Monday")
{
    if (month=="November" || month=="December")
    {
        payable= purchase - purchase*0.05;
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