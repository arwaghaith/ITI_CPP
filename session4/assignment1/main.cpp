#include <iostream>
#include "Date.hpp"
using namespace std;
int main()
{

    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    Date date(day, month, year);

    day = date.getDay();
    month = date.getMonth();
    year = date.getYear();

    if (date.isDateValid())
    {
        cout << day << "/" << month << "/" << year << "   "
             << "Date is valid" << endl;
    }
    else
    {
        while (!date.isDateValid())
        {

            cout << day << "/" << month << "/" << year << "   "
                 << "Date is invalid" << endl;
            cout << "Please enter a valid date" << endl;
            cout << "Enter day: ";
            cin >> day;
            cout << "Enter month: ";
            cin >> month;
            cout << "Enter year: ";
            cin >> year;
            date.setDay(day);
            date.setMonth(month);
            date.setYear(year);
        }
        cout << day << "/" << month << "/" << year << "   "
             << "Date is valid" << endl;
    }
    return 0;
}