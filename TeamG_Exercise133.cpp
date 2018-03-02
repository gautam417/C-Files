//Gautam Mehta
//Mercado Perez, Erik
//Michael, Alex
//Monton, Beau Jarrod
#include <iostream>
#include <iomanip>

using namespace std;
class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee(string n, int i, string d, string p)
    {
        name = n;
        idNumber = i;
        department = d;
        position = p;
    }
    Employee(string n, int i)
    {
        name = n;
        idNumber = i;
        department= "";
        position="";
    }
    Employee()
    {
        name= "";
        department="";
        position = "";
        idNumber = 0;
    }
    void setName(string na)
    {
        name = na;
    }
    void setIdNum(int id)
    {
        idNumber=id;
    }
    void setDepartment(string dep)
    {
        department = dep;
    }
    void setPosition(string pos)
    {
        position= pos;
    }
    string getName() const
    {
        return name;
    }
    int getIdNum() const
    {
        return idNumber;
    }
    string getDepartment() const
    {
        return department;
    }
    string getPosition() const
    {
        return position;
    }
};

int main()
{
    Employee emp1("Paul Rogers",12345,"Accounting","Vice President");
    Employee emp2("John Reid", 34567);
    emp2.setDepartment("IT");
    emp2.setPosition("Programmer");
    Employee emp3;
    emp3.setName("Peter Meyers");
    emp3.setIdNum(47899);
    emp3.setDepartment("Manufacturing");
    emp3.setPosition("Engineer");
    
    cout << "Name: " << emp1.getName() << endl;
    cout << "ID Number: " << emp1.getIdNum() << endl;
    cout << "Department: " << emp1.getDepartment() << endl;
    cout << "Position: " << emp1.getPosition() << endl << endl;
    
    cout << "Name: " << emp2.getName() << endl;
    cout << "ID Number: " << emp2.getIdNum() << endl;
    cout << "Department: " << emp2.getDepartment() << endl;
    cout << "Position: " << emp2.getPosition() << endl << endl;
    
    cout << "Name: " << emp3.getName() << endl;
    cout << "ID Number: " << emp3.getIdNum() << endl;
    cout << "Department: " << emp3.getDepartment() << endl;
    cout << "Position: " << emp3.getPosition() << endl << endl;
    return 0;
}
