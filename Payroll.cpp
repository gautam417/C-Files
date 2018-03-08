//Mehta, Gautam


#include <iostream>
#include <fstream>

using namespace std;
const int size =1;

struct record
{
    char chars[size];
};

int main ()
{
    string fname, path;
    int listnum=0;
    int countnum=0;
    record data;
    cout << "Enter the file name: ";
    cin >> fname;
    path = "/Users/gautammehta/Desktop/" + fname;
    
    fstream file(path, ios::in | ios::binary);
    file.read(reinterpret_cast<char *>(&data),sizeof(data));
    while (!file.eof())
    {
        if (*data.chars == '\n')
        {
            listnum++;
        }
        file.read(reinterpret_cast<char *>(&data),sizeof(data));
    }
    file.close();
    
    fstream file2(path, ios::in | ios::binary);
    file2.read(reinterpret_cast<char *>(&data),sizeof(data));
    while (!file2.eof())
    {
        if (countnum >= listnum -10)
        {
            cout << data.chars;
        }
        if (*data.chars == '\n')
        {
            countnum ++;
        }
        file2.read(reinterpret_cast<char *>(&data),sizeof(data));
    }
    cout << endl;
    file2.close();
    return 0;
}
