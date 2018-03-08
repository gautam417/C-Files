//Gautam Mehta

#include <iostream>
#include <iomanip>
using namespace std;

class EmployeeInfo
{
private:
    string fullname;
    double hourlyrate, hoursWorked;
    
public:
    EmployeeInfo();
    string getName();
    double getHourlyRate();
    double getHoursWorked();
    void setName(string);
    void setHourlyRate(double);
    void setHoursWorked(double);
    double calculatePay();
};

EmployeeInfo::EmployeeInfo()
{
    fullname = "";
    hourlyrate = 0;
    hoursWorked = 0;
}
string EmployeeInfo::getName()
{
    return fullname;
}
double EmployeeInfo::getHoursWorked()
{
    return hoursWorked;
}
double EmployeeInfo::getHourlyRate()
{
    return hourlyrate;
}
double EmployeeInfo::calculatePay()
{
    return hoursWorked*hourlyrate;
}
void EmployeeInfo::setName(string name)
{
    cout << "Enter the employee name (stop to exit): ";
    cin >> fullname;
    if(fullname != "stop")
    {
        cin >> name;
        fullname = fullname + " " + name;
    }
}

void EmployeeInfo::setHourlyRate(double hr)
{
    cout << "Please enter hourly rate: ";
    cin >> hr;
    while(hr <= 0)
    {
        cout << "Invalid hourly rate. Please enter positive numbers only: ";
        cin >> hr;
    }
    hourlyrate = hr;
}

void EmployeeInfo::setHoursWorked(double hw)
{
    cout << "Please enter the number of hours worked: ";
    cin >> hw;
    while(hw <= 0)
    {
        cout << "Invalid amount of hours worked. Please enter positive numbers only: ";
        cin >> hw;
    }
    hoursWorked = hw;
}

int main()
{
    cout << "Welcome to my payroll program" << endl;
    string employeeName="";
    double employeeRate=0;
    double employeeHoursWorked=0;
    
    EmployeeInfo data;
    
    data.setName(employeeName);
    while(data.getName() != "stop")
    {
        if(data.getName() == "stop")
        {
            return 0;
        }
        
        data.setHourlyRate(employeeRate);
        data.setHoursWorked(employeeHoursWorked);
        data.getName();
        cout << "Employee Name: " << data.getName() << endl;
        cout << "Weekly pay amount: " << fixed << setprecision(2) << data.calculatePay() << endl << endl;
        
        data.setName(employeeName);
        
    }
    
    return 0;
}




