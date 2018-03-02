//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct player
{
    string playerName;
    int playerNum, points;
};

int main()
{
    const int NUM_PLAYERS = 12;
    player team[NUM_PLAYERS];
    int index;
    int total =0;
    for (index = 0; index < NUM_PLAYERS; index++)
    {
        cout << "PLAYER #" << (index + 1);
        cout << endl<<"---------";
        cout << endl<< "Player's name: ";
        cin.ignore();
        getline(cin, team[index].playerName);
        
        cout << "Player's number: ";
        cin >> team[index].playerNum;
        
        cout << "Points scored: ";
        cin >> team[index].points;
        
        cout << endl;
    }
    cout.width(20);
    cout.setf(ios::left);
    cout << "\nNAME";
    cout.width(10);
    cout << "NUMBER";
    cout.width(10);
    cout << "POINTS SCORED\n";
    
    for(int i = 0; i < NUM_PLAYERS; i++)
    {
        cout << setw(20) << team[i].playerName;
        cout << setw(10) << team[i].playerNum;
        cout << setw(10) << team[i].points << endl;
    }
    for (int j = 0; j < NUM_PLAYERS; j++)
    {
        total += team[j].points;
    }
    cout << "TOTAL POINTS: " << total << endl;
    
    int highest = 0, highPoints = team[0].points;
    
    for (int index = 1; index < NUM_PLAYERS; index++)
    {
        if (team[index].points > highPoints)
        {
            highest = index;
            highPoints = team[index].points;
        }
    }
    cout << "The player who scored the most points is: ";
    cout << team[highest].playerName << endl;
}

