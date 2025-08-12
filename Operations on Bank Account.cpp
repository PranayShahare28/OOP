/*Implement a class to illustrate working of a bank account of a
customer that consists of the following members.
Name: Pranay Shahare (B24CE1106)*/


#include <iostream> 
#include <string> 
using namespace std; 
 
class bank_account { 
    string name; 
    string Acc_type; 
    long int Acc_number; 
    double Avail_balance;  
public: 
    bank_account(string n, string at, long int an, double b) { 
        cout << "Parameterized constructor\n"; 
        name = n; 
        Acc_type = at; 
        Acc_number = an; 
        Avail_balance = b; 
    } 
    void accept(); 
    void display(); 
    void deposit(); 
    void withdraw(); 
}; 
void bank_account::display() { 
    cout << "\nName: " << name << "\n"; 
    cout << "Account Type: " << Acc_type << "\n"; 
    cout << "Account Number: " << Acc_number << "\n"; 
    cout << "Available Balance: " << Avail_balance << "\n"; 
} 
void bank_account::deposit() { 
    double amt_dep; 
    cout << "Enter the amount to be deposited: "; 
    cin >> amt_dep; 
    Avail_balance += amt_dep; 
    cout << "Balance after deposit: " << Avail_balance << "\n"; 
} 
void bank_account::withdraw() { 
    double amt_wtdr; 
    cout << "Enter the amount to withdraw: "; 
    cin >> amt_wtdr; 
    if (amt_wtdr > Avail_balance) { 
        cout << "Insufficient balance.\n"; 
    } else { 
        Avail_balance -= amt_wtdr; 
        cout << "Balance after withdrawal: " << Avail_balance << "\n"; 
    } 
} 
int main() { 
    string n, at; 
    long int an; 
    double b; 
    cout << "Enter the name: "; 
    cin>>n; 
    cout << "Enter account type: "; 
    cin>>at; 
    cout << "Enter the account number: "; 
    cin >> an; 
    cout << "Enter Available balance: "; 
    cin >> b; 
    bank_account obj1(n, at, an, b); 
    int choice; 
    obj1.display(); 
    do { 
        cout << "\nBank Menu\n"; 
        cout << "1. Display Account Info\n"; 
        cout << "2. Deposit Amount\n"; 
        cout << "3. Withdraw Amount\n"; 
        cout << "4. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
    switch (choice) { 
        case 1: 
                obj1.display(); 
                break; 
            case 2: 
                obj1.deposit(); 
                break; 
            case 3: 
                obj1.withdraw(); 
                break; 
            case 4: 
                cout << "Exiting the program. Thank you!\n"; 
                break; 
            default: 
                cout << "Invalid choice. Please try again.\n"; 
        } 
    } while (choice != 4); 
 
    return 0; 
}
