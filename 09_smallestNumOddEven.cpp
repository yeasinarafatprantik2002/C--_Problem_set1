#include <iostream>

using namespace std;

int main()
{

    int num1;
    cout << "Enter First Number: ";

    if (cin >> num1) // Check int datatypes
    {
        int num2, num3, num;
        cout << "Enter Second Number: ";
        cin >> num2;
        cout << "Enter Third Number: ";
        cin >> num3;
        cout << endl;
        if (num1 < num2 && num1 < num3) // Check Smallest number num1
        {
            cout << "The Smallest Number Is: " << num1 << endl;
            num = num1;
        }
        else if (num2 < num1 && num2 < num3) // Check Smallest number num2
        {
            cout << "The Smallest Number Is: " << num2 << endl;
            num = num2;
        }
        else if (num3 < num1 && num3 < num2) // Check Smallest number num3
        {
            cout << "The Smallest Number Is: " << num3 << endl;
            num = num3;
        }
        else // Check all numbers are equal
        {
            cout << "All Numbers Are Equal!";
        }

        // Handling even number
        if (num % 2 == 0 && num != 0)
        {

            cout << "Smallest Number " << num << " is an even number.";
        }
        else if (num == 0)
        {
            // Handling number 0
            cout << "Smallest number "
                 << "\"" << num << "\".";
        }

        // Handling odd number
        else
        {
            cout << "Smallest Number " << num << " is an odd number.";
        }
    }
    else // Handling invalid input
    {
        cout << "Please Enter A Valid Number!";
    }
    return 0;
}
