#include <iostream>
using namespace std;

int main()
{
    char chr;
    cout << "Enter Your Character: ";

    if (cin >> chr && chr == 'A' || chr == 'a' || chr == 'E' || chr == 'e' || chr == 'I' || chr == 'i' || chr == 'O' || chr == 'o' || chr == 'U' || chr == 'u' || chr == 'B' || chr == 'b' || chr == 'C' || chr == 'c' || chr == 'D' || chr == 'd' || chr == 'F' || chr == 'f' || chr == 'G' || chr == 'g' || chr == 'H' || chr == 'h' || chr == 'J' || chr == 'j' || chr == 'K' || chr == 'k' || chr == 'L' || chr == 'l' || chr == 'M' || chr == 'm' || chr == 'N' || chr == 'n' || chr == 'P' || chr == 'p' || chr == 'Q' || chr == 'q' || chr == 'R' || chr == 'r' || chr == 'S' || chr == 's' || chr == 'T' || chr == 't' || chr == 'V' || chr == 'v' || chr == 'W' || chr == 'w' || chr == 'X' || chr == 'x' || chr == 'Y' || chr == 'y' || chr == 'Z' || chr == 'z')// Check char datatypes

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