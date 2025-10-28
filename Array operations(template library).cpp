#include <iostream>
using namespace std;

template<class T>
void selection_sort(T a[], int n)
{
    int i, j, min;
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        // Manual swap using a temporary variable
        T temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Sort Integer Array\n";
        cout << "2. Sort Float Array\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int n1;
                cout << "Enter size of integer array: ";
                cin >> n1;
                int a[n1];
                cout << "Enter " << n1 << " elements for the integer array: ";
                for(int i = 0; i < n1; i++) {
                    cin >> a[i];
                }
                cout << "Sorted Integer array: ";
                selection_sort(a, n1);
                break;
            }

            case 2: {
                int n2;
                cout << "Enter size of float array: ";
                cin >> n2;
                float b[n2];
                cout << "Enter " << n2 << " elements for the float array: ";
                for(int i = 0; i < n2; i++) {
                    cin >> b[i];
                }
                cout << "Sorted Floating array: ";
                selection_sort(b, n2);
                break;
            }

            case 3:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(choice != 3);

    return 0;
}
