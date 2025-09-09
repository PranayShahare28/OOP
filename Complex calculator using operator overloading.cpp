//Designing of Complex Number calculator

#include <iostream> 
using namespace std; 
 
class Complex { 
    float real, imag; 
public: 
   /* Complex() { 
        real = 0; 
        imag = 0; 
    } 
    Complex(float p, float q) { 
        real = p; 
        imag = q; 
    } */ 
    void display() { 
        cout << real << " + " << imag << "i" << endl; 
    } 
    Complex operator+(Complex c) { 
        Complex temp; 
        temp.real = real + c.real; 
        temp.imag = imag + c.imag; 
        return temp; 
    } 
 
    friend Complex operator*(Complex c1, Complex c2); 
 
    friend istream & operator>>(istream &in, Complex &obj); 
    friend ostream & operator<<(ostream &out, Complex &obj); 
}; 
Complex operator*(Complex c1, Complex c2) { 
    Complex ob; 
    ob.real = (c1.real * c2.real) - (c1.imag * c2.imag); 
    ob.imag = (c1.real * c2.imag) + (c1.imag * c2.real); 
    return ob; 
} 
istream & operator>>(istream &in, Complex &obj) { 
    cout << "Enter the real part: "; 
    in >> obj.real; 
    cout << "Enter the imaginary part: "; 
    in >> obj.imag; 
    return in; 
} 
ostream & operator<<(ostream &out, Complex &obj) { 
    out << obj.real; 
    if (obj.imag >= 0) out << "+"; 
    out << obj.imag << "i"; 
    return out; 
} 
