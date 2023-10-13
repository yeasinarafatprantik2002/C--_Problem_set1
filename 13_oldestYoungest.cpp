#include <iostream>

using namespace std;

int main()
{

    int age1;
    cout << "Enter First Age: ";

    if (cin >> age1) // Check int datatypes
    {
        int age2, age3;
        cout << "Enter Second Age: ";
        cin >> age2;
        cout << "Enter Third Age: ";
        cin >> age3;
        if (age1 > age2 && age1 > age3) // Check Oldest Age age1
        {
            cout << "The Oldest Age Is: " << age1;
        }
        else if (age2 > age1 && age2 > age3) // Check Oldest Age age2
        {
            cout << "The Oldest Age Is: " << age2;
        }
        else if (age3 > age1 && age3 > age2) // Check Oldest Age age3
        {
            cout << "The Oldest Age Is: " << age3;
        }
        else // Check all Ages are equal
        {
            cout << "All Ages Are Equal!";
        }
        cout << endl;
        if (age1 < age2 && age1 < age3) // Check Youngest Age age1
        {
            cout << "The Youngest Age Is: " << age1;
        }
        else if (age2 < age1 && age2 < age3) // Check Youngest Age age2
        {
            cout << "The Youngest Age Is: " << age2;
        }
        else if (age3 < age1 && age3 < age2) // Check Youngest Age age3
        {
            cout << "The Youngest Age Is: " << age3;
        }
        else // Check all Ages are equal
        {
            cout << "All Ages Are Equal!";
        }
    }
    else // Handling invalid input
    {
        cout << "Please Enter A Valid Age!";
    }

    return 0;
}
