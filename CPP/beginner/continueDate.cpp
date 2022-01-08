#include<iostream>
#define endl "\n"
using namespace std ;
class Date
{
    private:
        int day , month, year ;
    public:
        friend istream &operator>>(istream &is, Date &d);
        friend ostream &operator<<(ostream &os, Date &d);
        friend Date operator++(Date &d);
        int nhuan();
};
int Date::nhuan()
{
    return year%400 == 0 or (year %4 == 0 && year%100 != 0);
}
istream &operator>>(istream &is, Date &d)
{
    char c ;
    is >> d.day >> c >> d.month >> c >> d.year ;
    return is ;
}
ostream &operator<<(ostream &os, Date &d)
{
    os << d.day << "/" << d.month << "/" << d.year << endl ;
    return os ;
}
Date operator++(Date &d)
{
    int t[] = {0, 31, 28 + d.nhuan(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(d.day == t[d.month])
    {
        d.day = 1 ;
        d.month ++ ;
    }
    else d.day ++ ;
    if(d.month == 13)
    {
        d.month = 1 ;
        d.year ++ ;
    }
    return d;
}
int main()
{
    Date d;
    cin >> d ;
    ++ d ;
    cout << d ;
}