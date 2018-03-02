//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct studentType
{
    string studentFName, studentLName;
    int testScore;
    char letter;
};
void reader(studentType i[20])
{
    ifstream inputFile;
    inputFile.open("/Users/gautammehta/Desktop/CIS22B/TeamG_Exercise113/113studentData.txt");
    
    for(int num1 = 0; num1 < 20; ++num1)
    {
        inputFile >> i[num1].studentFName;
        inputFile >> i[num1].studentLName;
        inputFile >> i[num1].testScore;
    }
};
void grader(studentType j[20])
{
    for(int num2 = 0; num2 < 20; num2++)
    {
        if (j[num2].testScore >= 90)
        {
            j[num2].letter = 'A';
        }
        if (j[num2].testScore >= 80 && j[num2].testScore < 90)
        {
            j[num2].letter = 'B';
        }
        if (j[num2].testScore >= 70 && j[num2].testScore < 80)
        {
            j[num2].letter = 'C';
        }
        if (j[num2].testScore >= 60 && j[num2].testScore < 70)
        {
            j[num2].letter = 'D';
        }
    }
};
int highest(studentType r[20])
{
    int high = 0;
    for(int num3 = 0; num3 < 20; num3++)
    {
        if(r[num3].testScore > high)
        {
            high = r[num3].testScore;
        }
    }
    return high;
}

void highprint(studentType s[20], int high1)
{
    
    for(int num4 = 0; num4 < 20; num4++)
    {
        if(s[num4].testScore == high1)
        {
            cout << s[num4].studentLName << ", " << s[num4].studentFName << endl;
        }
    }
};

int main()
{
    int high2;
    studentType studentlist[20];
    reader(studentlist);
    grader(studentlist);
    high2 = highest(studentlist);
    
    cout << "Student Name     Test Score  Grade" << endl;
    for(int num5 = 0; num5 < 20; num5++)
    {
        cout << studentlist[num5].studentLName << ", " << studentlist[num5].studentFName;
        cout << "      " << studentlist[num5].testScore << setw(4) << studentlist[num5].letter << endl;
    }
    
    cout << "\nHighest Test Score: " << high2 << endl;
    cout << "Students having the highest test score:" << endl;
    highprint(studentlist, high2);
    return 0;
}
