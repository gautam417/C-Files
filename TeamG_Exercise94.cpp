//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int *scores = nullptr;
    int i,size,average;
    double total = 0.0;
    cout << "Please input the number of scores\n";
    cin >> size;
    scores = new int[size];
    
    for (i = 0;i<size;i++)
    {
        cout << "Please enter a score\n";
        cin >> scores[i];
    }
    for (i = 0; i < size; i++)
    {
        total += scores[i];
    }
    average = total/size;
    cout << "The average of the scores is " << average << endl;
    
    cout << "\nHere are the scores in ascending order\n";
    for (i = 0; i < size; i++)
        cout << scores[i] << endl;
    delete [] scores;
    scores = nullptr;
    return 0;
}
