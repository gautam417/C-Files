//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include <iostream>

using namespace std;

void array_sub_notation(int array[]);
void pnt_off_array(int array[]);
void pointer_sub_notation(int array[]);
void pnt_off(int array []);
int main ()
{
    int numbers[]= {100,200,300,400};
    cout << "Array numbers displayed with:" <<endl;
    cout << endl;
    
    array_sub_notation(numbers);
    pnt_off_array(numbers);
    pointer_sub_notation(numbers);
    pnt_off(numbers);
}
void array_sub_notation(int array[])
{
    cout << "Array subscript notation" << endl;
    for (int i =0; i<4; i++)
    {
        cout << "numbers[" << i << "] = "<< array[i] << endl;
    }
    cout << endl;
}
void pnt_off_array(int array[])
{
    cout << "Pointer/offset notation where the pointer is the array name" << endl;
    
    for (int i= 0; i <4; i++)
    {
        cout <<"*(numbers + "<< i << ") = " << *(array + i) << endl;
    }
    cout << endl;
}
void pointer_sub_notation(int array[])
{
    int *nPtr= nullptr;
    nPtr = array;
    cout << "Pointer subscript notation" << endl;
    for (int i=0;i<4;i++)
    {
        cout << "nPtr[" << i << "] = " << nPtr[i] << endl;
    }
    cout << endl;
}
void pnt_off(int array [])
{
    int *nPtr = nullptr;
    nPtr= array;
    cout << "Pointer/offset notation" << endl;
    for (int i= 0; i<4; i++)
    {
        cout << "*(nPtr + " << i << ") = " << *(nPtr+ i) << endl;
    }
}

