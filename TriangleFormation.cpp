//Mehta, Gautam

#include <iostream>
#include <iomanip>

using namespace std;
enum triangleType {SCALENE, ISOSCELES, EQUILATERAL, NOTRIANGLE};
void displayType (triangleType);
void triangleShape(int a, int b, int c);

int main ()
{
    int a,b,c;
    cout << "Enter the lengths of the three sides of a triangle." << endl;
    cin >> a >> b >> c;
    triangleShape(a, b, c);
    return 0;
}

void displayType(triangleType i)
{
    switch(i)
    {
        case SCALENE    : cout << "scalene" << endl;
            break;
        case ISOSCELES   : cout << "isosceles" << endl;
            break;
        case EQUILATERAL : cout << "equilateral" << endl;
            break;
        case NOTRIANGLE  : cout << "noTriangle" << endl;
            break;
    }
}
void triangleShape (int a, int b, int c)
{
    if ((a>=b+c) || (b>=a+c) || (c>=a+b))
    {
        cout << "The shape of the triangle is: ";
        displayType(NOTRIANGLE);
    }
    else if ((a == b) && (b==c) && (a==c))
    {
        cout << "The shape of the triangle is: ";
        displayType(EQUILATERAL);
    }
    else if ((a!=b) && (b!= c) && (a!=c))
    {
        cout << "The shape of the triangle is: ";
        displayType(SCALENE);
    }
    else
    {
        cout << "The shape of the triangle is: ";
        displayType(ISOSCELES);
    }
}
