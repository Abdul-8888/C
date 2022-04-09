#include <iostream>
using namespace std;
main()
{

string day;
int purchase;
float payable;

cout <<"Enter Day:";
cin >>day;
cout <<"Enter purchase amount";
cin >>purchase;

if(day=="Sunday" && purchase >= 5000)
    {
        payable=purchase - 0.1*purchase;

    }
cout <<"Your bill is "<<payable;

}