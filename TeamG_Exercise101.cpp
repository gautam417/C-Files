//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

bool ten_char(char array[], bool*);

int main()
{
    int SIZE = 50;
    char password[SIZE];
    int attempts = 0;
    bool good_pass = false;
    
    while (good_pass == false)
    {
        if (attempts < 1)
        {
            cout << "Enter a password consisting of exactly 4 lower case letters and 6 digits: " << endl;
            cin.getline(password, SIZE);
            ten_char(password, &good_pass);
            attempts += 1;
        }
        else
        {
            cout << "Invalid password. Please enter a password with exactly 4 lower case letters and 6 digits" << endl;
            cout << "For example, 1234abcd56 is valid. Please enter again: " << endl;
            cin.getline(password, SIZE);
            ten_char(password, &good_pass);
        }
    }
}

bool ten_char(char array[], bool* good_pass)
{
    int SIZEN = 0;
    int SIZEL = 0;
    
    if (strlen(array) == 10)
    {
        for (int i = 0; i < 10; i++)
        {
            
            if (isdigit(array[i]))
            {
                SIZEN += 1;
            }
            
            else if (isalpha(array[i]))
            {
                SIZEL += 1;
            }
            
            else
            {
                i = 10;
            }
        }
    }
    
    else
    {
        return *good_pass = false;
    }
    if (SIZEN + SIZEL == 10)
    {
        cout << "The number of lower case letters in the password is 4" << endl;
        cout << "The number of digits in the password is 6" << endl;
        return *good_pass = true;
    }
    else
    {
        return *good_pass = false;
    }
}

