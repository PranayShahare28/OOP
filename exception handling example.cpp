#include <iostream>
using namespace std;
class Student {
    double totalMarks;
    int subjects;
   double e;
public:
    void setvalue() {
        cout << "Enter the total marks obtained by the student: ";
        cin >> totalMarks;
        cout << "Enter the number of subjects: ";
        cin >> subjects;
    }
    void showvalue() {
        try {
            if (subjects == 0) {
                throw e;
            } else {
                double average = totalMarks / subjects;
                cout << "The average marks of the student are: " << average << endl;
            }
        }
        catch (double e) {
            cout << "Error: The student has not registered any subjects." << endl;
        }
    }
};
int main() {
    Student s1, s2;
    cout << "\nStudent 1 " << endl;
    s1.setvalue();
    s1.showvalue();
    cout << "\nStudent 2 " << endl;
    s2.setvalue();
    s2.showvalue();

    return 0;
}
