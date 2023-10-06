#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter Your Year: ";

    if (cin >> year) // Check int datatypes
    {
        if ((year % 400) == 0 || (year % 4 == 0) && (year % 100 != 0)) // Check leap year
        {
            cout << year << " is a leap year.";
        }
        else // Handling non leap year
        {
            cout << year << " is not a leap year.";
        }
    }
    else // Handling invalid input
    {
        cout << "Please Enter A Valid Year!";
    }

    return 0;
}
