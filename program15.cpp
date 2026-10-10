#include <iostream>
using namespace std;

class IncreDecre
{
    int a, b;

public:
    void accept()
    {
        cout << "\nEnter Two Numbers : \n";
        cout << " ";
        cin >> a;

        cout << " ";
        cin >> b;
    }

    void operator--()   // Overload Unary Decrement
    {
        a--;
        b--;
    }

    void operator++()   // Overload Unary Increment
    {
        a++;
        b++;
    }

    void display()
    {
        cout << "\nA : " << a;
        cout << "\nB : " << b;
    }
};

int main()
{
    IncreDecre id;

    id.accept();

    --id;

    cout << "\nAfter Decrementing : ";
    id.display();

    ++id;
    ++id;

    cout << "\n\nAfter Incrementing : ";
    id.display();

    return 0;
}