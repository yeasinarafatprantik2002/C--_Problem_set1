#include <iostream>

using namespace std;

int main()
{
    double num;
    cout << "Enter a number: ";
    if (cin >> num)// Check int datatypes
    {
        if (num < 0)// Check negative number
        {
            num = num * -1;
        }
        cout << "The absolute value is " << num << endl;
    }
    else// Handling invalid input
    {
        cout << "Please Enter A Valid Number!";
    }

    return 0;
}
