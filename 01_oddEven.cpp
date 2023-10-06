#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter Your Number: ";
    
    // Check int datatypes
    if (cin >> num)
    {
        // Handling even number
        if (num % 2 == 0 && num != 0)
        {

            cout << num << " is an even number.";
        }
        else if (num == 0)
        {
            // Handling number 0
            cout << "You entered number "
                 << "\"" << num << "\".";
        }

        // Handling odd number
        else
        {
            cout << num << " is an odd number.";
        }
    }
    else
    {
        cout << "Please Enter A Valid Number!";
    }

    return 0;
}