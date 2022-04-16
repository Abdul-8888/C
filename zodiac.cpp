#include <iostream>
using namespace std;
main()
{

string month;
int date;

cout <<"Enter your birth date:";
cin >> date;
cout <<"Enter your month name";
cin >> month;

if( month=="March" )
    {
        if( date >= 21 )
        cout <<"Zodiac sign is Aries. Symbol is the Ram.";
        if( date <= 20)
        cout <<"Zodiac sign is Pisces. Symbol is the Fishes.";

    }

if( month=="April" )
    {
        if( date >= 20 )
        cout <<"Zodiac sign is Taurus. Symbol is the Bull.";
        if( date <= 19)
        cout <<"Zodiac sign is Aries. Symbol is the Ram.";

    }

if( month=="May" )
    {
        if( date >= 21 )
        cout <<"Zodiac sign is Gemini. Symbol is the Twins.";
        if( date <= 20)
        cout <<"Zodiac sign is Taurus. Symbol is the the Bull.";

    }

if( month=="June" )
    {
        if( date >= 21 )
        cout <<"Zodiac sign is Cancer. Symbol is the Crab.";
        if( date <= 20)
        cout <<"Zodiac sign is Gemini. Symbol is the Twins.";

    }

if( month=="July" )
    {
        if( date >= 23 )
        cout <<"Zodiac sign is Leo. Symbol is the Lion.";
        if( date <= 22)
        cout <<"Zodiac sign is Cancer. Symbol is the Crab.";

    }

if( month=="August" )
    {
        if( date >= 23 )
        cout <<"Zodiac sign is Virgo. Symbol is the Virgin.";
        if( date <= 22)
        cout <<"Zodiac sign is Leo. Symbol is the Lions.";

    }

if( month=="September" )
    {
        if( date >= 23 )
        cout <<"Zodiac sign is Libra. Symbol is the Scales.";
        if( date <= 22)
        cout <<"Zodiac sign is Virgo. Symbol is the Virgin.";

    }

if( month=="October" )
    {
        if( date >= 23 )
        cout <<"Zodiac sign is Scorpio. Symbol is the Scorpion.";
        if( date <= 22)
        cout <<"Zodiac sign is Libra. Symbol is the Scales.";

    }

if( month=="November" )
    {
        if( date >= 22 )
        cout <<"Zodiac sign is Sagittarius. Symbol is the Archer.";
        if( date <= 21)
        cout <<"Zodiac sign is Scorpio. Symbol is the Scorpion.";

    }

if( month=="December" )
    {
        if( date >= 22 )
        cout <<"Zodiac sign is Capricon. Symbol is the Goat.";
        if( date <= 21)
        cout <<"Zodiac sign is Sagittarius. Symbol is the Archer.";

    }

if( month=="January" )
    {
        if( date >= 20 )
        cout <<"Zodiac sign is Aquarius. Symbol is the Water Bearer.";
        if( date <= 19)
        cout <<"Zodiac sign is Capricon. Symbol is the Goat.";

    }

if( month=="February" )
    {
        if( date >= 19 )
        cout <<"Zodiac sign is Pisces. Symbol is the Fishes.";
        if( date <= 18)
        cout <<"Zodiac sign is Aquarius. Symbol is the Water Bearer.";

    }



}