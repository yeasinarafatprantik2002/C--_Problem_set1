#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Your Number: ";
    if (cin >> num)
    {
        if (num > 0)
        {
            cout << "Your Entered Number " << num << " is Positive.";
        }
        else if (num < 0)
        {
            cout << "Your Entered Number " << num << " is Negative.";
        }
        else
        {
            cout << "Your Entered Number " << num << " is Zero.";
        }
    }
    else
    {
        cout << "Please Enter A Valid Number!";
    }

    return 0;
}
