#include <iostream>
using namespace std;

int main()
{
    char chr;
    cout << "Enter Your Character: ";

    if ((cin >> chr) && ((chr >= 'a' || chr >= 'A') && (chr <= 'z' || chr <= 'Z'))) // Check char datatypes

    {

        if (chr == 'A' || chr == 'a' || chr == 'E' || chr == 'e' || chr == 'I' || chr == 'i' || chr == 'O' || chr == 'o' || chr == 'U' || chr == 'u') // Check vowel
        {
            cout << "Your Entered Character " << chr << " "
                 << "is a vowel.";
        }
        else // Check consonant
        {
            cout << "Your Entered Character " << chr << " "
                 << "is a consonant.";
        }
    }
    else // Handling invalid input
    {
        cout << "Please Enter A Valid Character!";
    }

    return 0;
}
