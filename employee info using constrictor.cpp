#include<iostream> 
using namespace std; 
class Employee { 
private: 
    string fullName, division, residence; 
    int idNumber, joinDate, mobileNo; 
    static int objCounter; 
public: 
    void inputData(); 
    inline void showData(); 
    Employee() { 
        cout << "Default constructor called.\n"; 
        fullName = "Pranay"; 
        division = "Comp"; 
        residence = "ABC Corp"; 
        idNumber = 10001; 
        joinDate = 20230805; 
        mobileNo = 902000; 
        objCounter++; 
        showData(); 
        cout << "\n"; 
    } 
  Employee(string fname, string div, string addr, int id, int phone, int doj) { 
        cout << "Parameterized constructor called.\n"; 
        fullName = fname; 
        division = div; 
        residence = addr; 
        idNumber = id; 
        joinDate = doj; 
        mobileNo = phone; 
        objCounter++; 
        cout << "\n"; 
    } 
   Employee(const Employee &e) { 
        cout << "Copy constructor called.\n"; 
        fullName = e.fullName; 
        division = e.division; 
        residence = e.residence; 
        idNumber = e.idNumber; 
        joinDate = e.joinDate; 
        mobileNo = e.mobileNo; 
        objCounter++; 
    } 
    ~Employee() { 
        objCounter--; 
        cout << "Destructor called. Active objects: " << objCounter << "\n"; 
    } 
     static int getCount() { 
        return objCounter; 
    } 
}; 
int Employee::objCounter = 0; 
void Employee::inputData() { 
    cout << "Enter full name: "; 
    cin >> fullName; 
    cout << "Enter division: "; 
    cin >> division; 
    cout << "Enter address: "; 
    cin >> residence; 
    cout << "Enter ID: "; 
    cin >> idNumber; 
    cout << "Enter mobile: "; 
    cin >> mobileNo; 
    cout << "Enter joining date: "; 
    cin >> joinDate; 
} 
void Employee::showData() { 
    cout << "Name: " << fullName << "\n"; 
    cout << "Division: " << division << "\n"; 
    cout << "Address: " << residence << "\n"; 
    cout << "ID: " << idNumber << "\n"; 
    cout << "Mobile: " << mobileNo << "\n"; 
    cout << "Joined: " << joinDate << "\n"; 
} 
int main() { 
    Employee e1; 
    e1.inputData(); 
    e1.showData(); 
    Employee e2("shivam", "comp", "Nagpur", 2024, 61888, 2023351); 
    e2.showData(); 
    cout << "\n"; 
      Employee e3(e2); 
        cout << "Object copied successfully.\n"; 
        e3.showData(); 
  // Dynamic allocation of data 
    Employee*ptr = new Employee("asha", "comp", "pune", 2026, 7635768, 202384653); 
    ptr->showData(); 
    delete ptr;  // Destructor will be called 
}
