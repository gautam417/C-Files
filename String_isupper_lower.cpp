//Mehta, Gautam

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main ()
{
    string input;
    
    cout << "Enter a sentence with no spaces between the words" << endl << "and the first letter of each word capitalized." << endl << "(Example: StopAndSmellTheRoses):" <<endl;
    cin >> input;
    for (int i = 1; i < input.length(); i++)
    {
        if (isupper(input[i]))
        {
            input[i]= tolower(input[i]);
            input.insert(i, " ");
        }
    }
    cout << "output => " << input <<endl;
    return 0;
}
