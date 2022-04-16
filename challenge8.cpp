#include <iostream>
using namespace std;
main()
{

string p1,p2;
cout <<"p1 turn...";
cin >>p1;
cout <<"p2 turn...";
cin >>p2;

if ((p1=="rock" && p2=="scissor") || (p1=="scissor" && p2=="paper") || (p1=="paper" && p2=="rock"))
{
    cout <<"p1 is the winner.";
}
else if ((p2=="rock" && p1=="scissor") || (p2=="scissor" && p1=="paper") || (p2=="paper" && p1=="rock"))
{
    cout <<"p2 is the winner.";
}
else
{
    cout <<"it's a draw";
}

}