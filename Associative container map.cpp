#include <iostream>
#include <map>
using namespace std;
int main() {
    map<long long, string> students;   
    int n;
    long long prn;
    string name;

    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\nEnter PRN: ";
        cin >> prn;
        cout << "Enter Name: ";
        cin >> name;
        students[prn] = name;   // insert into map
    }

    cout << "\nStudent Data Stored in Map " << endl;
    for (auto it = students.begin(); it != students.end(); it++) {
        cout << "PRN: " << it->first << "  Name: " << it->second << endl;
    }
    cout << "\nEnter PRN to search: ";
    cin >> prn;

    auto it = students.find(prn);
    if (it != students.end()) {
        cout << "Student Found: " << it->second << endl;
    } else {
        cout << "PRN not found!" << endl;
    }
    return 0;
}
