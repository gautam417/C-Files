//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod

#include <iostream>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string> //maybe dont need
using namespace std;
int main()
{
    string fileName,targetFile;
    char ch;
    
    cout << "Enter a source file name: ";
    cin >> fileName;
    cout << "Enter a target file name: ";
    cin >> targetFile;
    
    ifstream inFile;
    ofstream outFile(targetFile);
    inFile.open(fileName);
    
    if (inFile)
    {
        inFile.get(ch);
        while (inFile)
        {
            outFile.put(ch);
            inFile.get(ch);
        }
        inFile.close();
        outFile.close();
        cout << "Copy Done" <<endl;
    }
    else 
    {
        cout << "Cannot open " << fileName << endl;
    }
    return 0;
}

