//Mehta, Gautam

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
struct MovieData
{
    string title, director;
    int release, runTime;
    double revenue, productionCost;
};

void Movie(MovieData &I);

int main ()
{
    MovieData firstMovie = {"War of the Worlds", "Byron Haskin", 1953, 88, 28000000, 15000000,};
    MovieData secondMovie = {"War of the Worlds", "Stephen Spielberg", 2005, 118, 14000000, 22000000};
    Movie(firstMovie);
    cout << endl;
    Movie(secondMovie);
}
void Movie(MovieData &I)
{
    cout << "Title: " << I.title << endl;
    cout<< "Director: " << I.director << endl;
    cout<< "Released: " << I.release << endl;
    cout<<"Running Time: " << I.runTime << " minutes" << endl;
    cout<<"Production cost: $" << setprecision(2) << fixed<< I.productionCost << endl;
    cout<<"First year revenue: $" << setprecision(2) << fixed << I.revenue << endl;
    double lossProfit = I.revenue - I.productionCost;
    if (lossProfit >=0)
    {
        cout << "First year profit: $" << setprecision(2) << fixed << lossProfit << endl <<endl;
    }
    if (lossProfit <=0)
    {
        cout<<"First year loss: $" << setprecision(2) << fixed << lossProfit <<endl <<endl;

    }
}
