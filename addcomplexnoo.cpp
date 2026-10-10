#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void getdata() {
        cin >> real >> imag;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << "+" << imag << "i";
    }
};

int main() {
    Complex c1, c2, result;
    cout << "enter first complex number(real imag): ";
    c1.getdata();

    cout << "enter second complex number(real imag): ";
    c2.getdata();

    result = c1.add(c2);

    cout << "sum = ";
    result.display();

    return 0;
}