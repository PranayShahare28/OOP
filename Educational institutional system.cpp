/*Educational Institutional System*/ 
#include <iostream> 
using namespace std; 
class staff { 
protected: 
   string name, dept; 
   int id; 
public: 
   void accept1(); 
   void display1(); 
}; 
void staff::accept1() { 
   cout << "Enter the name : "; 
   cin >> name; 
   cout << "Enter the department: "; 
   cin >> dept; 
   cout << "Enter the ID : "; 
   cin >> id; 
} 
void staff::display1() { 
   cout << "\nName is: " << name << endl; 
   cout << "Department: " << dept << endl; 
   cout << "ID is: " << id << endl; 
} 
class teacher : public staff { 
private: 
   string subject; 
   int experience; 
public: 
   void accept2(); 
   void display2(); 
}; 
void teacher::accept2() { 
   accept1(); 
   cout << "Enter the subject: "; 
   cin >> subject; 
   cout << "Enter the teaching experience (in years): "; 
   cin >> experience; 
} 
void teacher::display2() { 
   display1(); 
   cout << "Subject: " << subject << endl; 
   cout << "Teaching experience: " << experience << " years" << endl; 
} 
class suppstaff : public staff { 
private: 
   string areaofsupp; 
public: 
   void accept3(); 
   void display3(); 
}; 
void suppstaff::accept3() { 
   accept1(); 
   cout << "Enter the area of support: "; 
   cin >> areaofsupp; 
} 
void suppstaff::display3() { 
   display1(); 
   cout << "Area of support: " << areaofsupp << endl; 
} 
int main() { 
   int choice; 
   do { 
       cout << "\nStaff Management Menu\n"; 
       cout << "1. Enter Teacher Details\n"; 
       cout << "2. Enter Supporting Staff Details\n"; 
       cout << "3. Exit\n"; 
       cout << "Enter your choice: "; 
       cin >> choice; 
       switch (choice) { 
           case 1: { 
               int n; 
               cout << "Enter number of teachers: "; 
               cin >> n; 
               teacher t[n]; 
               for (int i = 0; i < n; ++i) { 
                   cout << "\nEntering Teacher " << i + 1 << " Details \n"; 
                   t[i].accept2(); 
               } 
               for (int i = 0; i < n; ++i) { 
                   cout << "\n Displaying Teacher " << i + 1 << " Details \n"; 
                   t[i].display2(); 
               } 
               break; 
           } 
           case 2: { 
               int m; 
               cout << "Enter number of supporting staff: "; 
               cin >> m; 
               suppstaff s[m]; 
               for (int i = 0; i < m; ++i) { 
                   cout << "\n Entering Supporting Staff " << i + 1 << " Details \n"; 
                   s[i].accept3(); 
               } 
               for (int i = 0; i < m; ++i) { 
                   cout << "\n Displaying Supporting Staff " << i + 1 << " Details \n"; 
                   s[i].display3(); 
               } 
               break; 
           } 
           case 3: 
               cout << "Exiting program. Thank you!\n"; 
               break; 
           default: 
               cout << "Invalid choice. Please enter 1, 2, or 3.\n"; 
       } 
   } while (choice != 3); 
   return 0; 
}
