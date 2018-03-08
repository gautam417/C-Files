//Gautam Mehta


#include <iostream>
using namespace std;

//Function Prototypes
void bubbleSort(int [], int);
void showArray (const int [], int, int);
void selectionSort (int [], int);

int main ()
{
    const int SIZE=8;
    int array1[SIZE]= {105, 102, 107, 103, 106, 100, 104, 101};
    cout << "Now performing the bubble sort\n";
    cout << "------------------------------\n";
    bubbleSort(array1, SIZE);
    
    int array2[SIZE]= {105, 102, 107, 103, 106, 100, 104, 101};
    cout << "\nNow performing the selection sort\n";
    cout << "------------------------------\n";
    selectionSort(array2,SIZE);
    return 0;
}

void showArray(const int array[], int size, int accumulator)
{
    cout << "After pass " << accumulator << ": ";
    for (int index = 0; index <size; index++)
        cout << array[index] << " ";
    cout << endl;
}

void bubbleSort (int array[], int size)
{
    bool swap;
    int temp;
    int accumulator = 0;
    
    do
    {
        swap = false;
        for (int index=0;index < (size - 1); index++)
        {
            if (array[index] > array[index + 1])
            {
                temp= array[index];
                array[index] = array[index + 1];
                array[index + 1]=temp;
                swap=true;
            }
            accumulator += 1;
            showArray(array, size, accumulator);
        }
    } while (swap);
}

void selectionSort (int array[], int size)
{
    int startScan, minIndex, minValue;
    int accumulator = 0;
    
    for (startScan =0; startScan<(size - 1); startScan++)
    {
        minIndex=startScan;
        minValue=array[startScan];
        for(int index=startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
            
        }
        accumulator += 1;
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
        showArray(array, size, accumulator);
    }
}


