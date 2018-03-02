//Mehta, Gautam
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod
#include <iostream>
#include <iomanip>
using namespace std;

class Personal
{
private:
    string name;
    string address;
    string phone;
    int age;
public:
    Personal()
    {
        name="";
        address ="";
        phone="";
        age=0;
    }
    Personal(string n, string add, int a, string ph)
    {
        name = n;
        address =add;
        age = a;
        phone = ph;
    }
    void setName(string n)
    {
        name =n;
    }
    void setAddress(string add)
    {
        address = add;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setPhone(string ph)
    {
        phone = ph;
    }
    string getName() const
    {
        return name;
    }
    string getAddress() const
    {
        return address;
    }
    string getPhone() const
    {
        return phone;
    }
    int getAge() const
    {
        return age;
    }
};
int main ()
{
    string info;
    int num;
    Personal myInfo;
    Personal famInfo;
    Personal friendInfo;
    
    cout << "What is your name?: ";
    getline(cin,info);
    myInfo.setName(info);
    cout << "What is your address?: ";
    getline(cin, info);
    myInfo.setAddress(info);
    cout << "What is your phone number?: ";
    getline(cin,info);
    myInfo.setPhone(info);
    cout <<"What is your age?: ";
    cin >> num;
    myInfo.setAge(num);
    cout <<endl;
    cout << "What is your family member's name?: ";
    cin.ignore();
    getline(cin,info);
    famInfo.setName(info);
    cout << "What is their address?: ";
    getline(cin, info);
    famInfo.setAddress(info);
    cout << "What is their phone number?: ";
    getline(cin,info);
    famInfo.setPhone(info);
    cout <<"What is their age?: ";
    cin >> num;
    famInfo.setAge(num);
    cout <<endl;
    cout << "What is your friend's name?: ";
    cin.ignore();
    getline(cin,info);
    friendInfo.setName(info);
    cout << "What is their address?: ";
    getline(cin, info);
    friendInfo.setAddress(info);
    cout << "What is their phone number?: ";
    getline(cin,info);
    friendInfo.setPhone(info);
    cout <<"What is their age?: ";
    cin >> num;
    friendInfo.setAge(num);
    cout <<endl;
    
    cout << "My information:\n";
    cout << "Name: " << myInfo.getName();
    cout << "\nAddress: " << myInfo.getAddress();
    cout << "\nAge: " << myInfo.getAge();
    cout << "\nPhone: " << myInfo.getPhone();
    cout <<endl;
    cout << "\nMy family member's information:\n";
    cout << "Name: " << famInfo.getName();
    cout << "\nAddress: " << famInfo.getAddress();
    cout << "\nAge: " << famInfo.getAge();
    cout << "\nPhone: " << famInfo.getPhone();
    cout <<endl;
    cout << "\nMy friend's information:\n";
    cout << "Name: " << friendInfo.getName();
    cout << "\nAddress: " << friendInfo.getAddress();
    cout << "\nAge: " << friendInfo.getAge();
    cout << "\nPhone: " << friendInfo.getPhone();
    cout <<endl;
    return 0;
}
