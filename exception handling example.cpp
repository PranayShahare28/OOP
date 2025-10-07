#include <iostream>
using namespace std;
             double calcavg(double totalm, int sub) {
    if (sub == 0) {
        throw sub;
    }
    return totalm / sub;
}
int main() {
    double totalm;
    int sub;
    int n;
    cout<<"Enter the no.of students you want to enter: ";
    cin>>n;
    
for(int i=0;i<n;i++){
    cout << "Student " <<i+1<< endl;
    cout << "Enter the total marks obtained by the student: ";
    cin >> totalm;
    cout << "Enter the number of subjects: ";
    cin >> sub;
                try {
        double average = calcavg(totalm, sub);
        cout << "The average marks of the student are: " << average << endl;
    }
    catch (int e) {
        cout << "Error: The student has not registered any subjects." << endl;
    }
    cout << endl;
};
    return 0;
