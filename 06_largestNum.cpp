#include <iostream>

using namespace std;

int main()
{

    int num1;
    cout << "Enter First Number: ";

    if (cin >> num1)// Check int datatypes
    {
        int num2, num3;
        cout << "Enter Second Number: ";
        cin >> num2;
        cout << "Enter Third Number: ";
        cin >> num3;
        if (num1 > num2 && num1 > num3)// Check largest number num1
        {
            cout << "The Largest Number Is: " << num1;
        }
        else if (num2 > num1 && num2 > num3)// Check largest number num2
        {
            cout << "The Largest Number Is: " << num2;
        }
        else if (num3 > num1 && num3 > num2)// Check largest number num3
        {
            cout << "The Largest Number Is: " << num3;
        }
        else
        {
            cout << "All Numbers Are Equal!";
        }
    }
    else
    {
        cout << "Please Enter A Valid Number!";
    }

    return 0;
}
