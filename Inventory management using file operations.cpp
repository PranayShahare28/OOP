#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Inventory {
    string name;
    string id;
    int quantity;
    double price;
public:
    void accept() {
        cout << "Enter the name of item: ";
        cin >> name;
        cout << "Enter the ID: ";
        cin >> id;
        cout << "Enter the quantity of item: ";
        cin >> quantity;
        cout << "Enter the price per item: ";
        cin >> price;
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nID of Item: " << id;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: " << price;
        cout << "\nTotal Price: " << quantity * price << endl;
    }

    // Write data in text format
    void writeToFile(ofstream &file) {
        file << name << " " << id << " " << quantity << " " << price << "\n";
    }
    // Read data in text format
    void readFromFile(ifstream &file) {
        file >> name >> id >> quantity >> price;
    }
};
int main() {
    int n;
    cout << "Enter the number of items you want to add in Inventory: ";
    cin >> n;
    Inventory item[n];
    ofstream outFile("Stock.txt");
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    cout << "\nEnter the details of " << n << " items:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << ":\n";
        item[i].accept();
        item[i].writeToFile(outFile);
    }
    outFile.close();

    ifstream inFile("Stock.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << "\nDisplaying Inventory Information:\n";
    for (int i = 0; i < n; i++) {
        item[i].readFromFile(inFile);
        item[i].display();
    }
    inFile.close();

    return 0;
}
