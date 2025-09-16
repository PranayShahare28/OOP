#include <iostream> 
using namespace std; 
class shape { 
protected: 
    float x, y; 
public: 
    void getdata() { 
        cout << "Enter the 1st element: "; 
        cin >> x; 
        cout << "Enter the 2nd element: "; 
        cin >> y; 
    } 
    virtual void display() = 0;   
}; 
class triangle : public shape { 
public: 
    void display()  { 
        float area = 0.5 * x * y; 
        cout << "Area of triangle: " << area << endl; 
    } 
}; 
class Rect : public shape { 
public: 
    void display()  { 
        float area = x * y; 
        cout << "Area of Rectangle: " << area << endl; 
    } 
}; 
int main() { 
    shape* ptr; 
    triangle t; 
    ptr = &t; 
    cout<<"For Triangle\n"; 
    ptr->getdata(); 
    ptr->display(); 
 
    shape* ptr1; 
    Rect p; 
    ptr1 = &p; 
    cout<<"For Square\n"; 
    ptr1->getdata(); 
    ptr1->display() 
    return 0; 
}
