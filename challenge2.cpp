#include <iostream>
using namespace std;
main()
{

string day;
int purchase;
float payable;

cout <<"Enter day";
cin >>day;
cout <<"Enter purchase amount";
cin >>purchase;

if(purchase >= 5000)
    {
        if(day=="Sunday")
        payable= purchase - purchase*0.1;
        else
        payable= purchase - purchase*0.05;

    }
else
{
    payable=purchase;
}
    cout <<"Your bill is"<<payable;

}