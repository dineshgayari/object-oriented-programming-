#include <iostream>
using namespace std;

class Complex
{
    int num1, num2;

public:
    void accept()
    {
        cout << "\nEnter Two Complex Numbers : ";
        cin >> num1 >> num2;
    }

    Complex operator+(Complex obj)   // Overloading '+' operator
    {
        Complex c;

        c.num1 = num1 + obj.num1;
        c.num2 = num2 + obj.num2;

        return c;
    }

    void display()
    {
        cout << num1 << "+" << num2 << "i" << "\n";
    }
};

int main()
{
    Complex c1, c2, sum;

    // Accepting the values
    c1.accept();
    c2.accept();

    // Addition of objects
    sum = c1 + c2;

    cout << "\nEntered Values : \n";

    cout << "\t";
    c1.display();

    cout << "\t";
    c2.display();

    cout << "\nAddition of Real and Imaginary Numbers : \n";

    cout << "\t";
    sum.display();

    return 0;
}