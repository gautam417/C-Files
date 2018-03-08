//Mehta, Gautam


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string fileName, line, strFind;
    int count =0;
    cout << "Enter the file name: ";
    cin >> fileName;
    fstream file(fileName, ios::in);
    if (!file)
    {
        cout << "Could not open file." << endl;
        return 0;
    }
    cout << "Enter string to search for: ";
    cin >> strFind;
    
    while (file)
    {
        getline(file,line);
        if ((line.find(strFind,0)) < line.length())
        {
            cout << "found in: " << line << endl;
            count+=1;
        }
    }
    cout <<"\"" << strFind <<"\" was found " << count << " times" << endl;
    file.close();
    return 0;
}

