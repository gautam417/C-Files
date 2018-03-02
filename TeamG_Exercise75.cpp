//Gautam Mehta
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int maxOrders [3] = {50,100,999999};
    int shipCharge[3]= {20,10,0};
    int numOrdered = 0;
    
    cout << "Number ordered (negative number or 0 to end): ";
    cin >> numOrdered;
    
    
    if (numOrdered <=0)
    {
        return 0;
    }
    
    while (numOrdered>0)
    {
        if (numOrdered <= maxOrders[0])
        {
            cout << "Shipping charge for a quantity of " << numOrdered << " is $" << shipCharge[0] <<endl << endl;
        }
        else if (numOrdered <= maxOrders[1])
        {
            cout << "Shipping charge for a quantity of " << numOrdered << " is $" << shipCharge[1] <<endl << endl;
        }
        else if (numOrdered<= maxOrders[2])
        {
            cout << "Shipping charge for a quantity of " << numOrdered << " is $" << shipCharge[2] <<endl << endl;
        }
        cout << "Number ordered (negative number or 0 to end): ";
        cin >> numOrdered;
    }
    return 0;
}
