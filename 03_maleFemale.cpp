#include <iostream>
using namespace std;

int main()
{

    char chr;
    cout << "Enter Your Character: ";
    if (cin >> chr && chr == 'M' || chr == 'm' || chr == 'F' || chr == 'f')// Check char datatypes
    {
        if (chr == 'M' || chr == 'm')// Check Male
        {
            cout << "Your Gender is Male.";
        }
        else// check female
        {
            cout << "Your Gender is Female";
        }
    }
    else// Handling invalid input
    {
        cout << "Please Enter A Valid Character!";
    }

    return 0;
}
