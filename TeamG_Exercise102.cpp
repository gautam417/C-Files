//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    const int LENGTH =40;
    
    char first[LENGTH], second[LENGTH];
    
    cout << "Please input the first name\n";
    cin.getline(first, LENGTH);
    
    cout << "Please input the second name\n";
    cin.getline(second, LENGTH);
    
    if (strcmp(first, second) > 0)
        cout << "The names are not the same:\n" <<
        second<< "\n" << first << "\n";
    else if (strcmp(first, second) < 0)
        cout << "The names are not the same:\n" <<
        first<< "\n" << second << "\n";
    else
        cout << "The names are the same\n";
    return 0;
}
