//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include <iostream>
#include <string>

using namespace std;

string response;
bool keepPlaying = true; //Sentinel Value
bool areNums(string s, int startIndex, int subLength); //function to check if substring of a certain string are all digits
int main()
{
    while (keepPlaying)
    {
        cout << "Item number (e.g. 123-45 or X or x to end): ";
        cin >> response;
        
        if(response == "X" || response == "x")
        {
            keepPlaying = false;
        }
        else if( (areNums(response, 0, 3)) && (response.substr(3,1) == "-") && (areNums(response, 5, 2)) )
        {
            cout << "Correct format." << endl << endl;
        }
        else
        {
            cout << "Incorrect format." << endl << endl;
        }
    }
    return 0;
}
bool areNums(string s, int startIndex, int subLength)
{
    return (s.substr(startIndex, subLength) >= "0" && s.substr(startIndex, subLength) <= "9");
}
