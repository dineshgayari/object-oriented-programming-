#include <iostream>
using namespace std;

class product
{
protected:
    int pid, price;

public:
    virtual void display()
    {
        cout << "\nEnter pid: ";
        cin >> pid;

        cout << "\nEnter price: ";
        cin >> price;
    }
};

class laptop : public product
{
private:
    int model;

public:
    void details()
    {
        cout << "\nEnter model: ";
        cin >> model;
    }
};

int main()
{
    product p;
    laptop l;
    product* ptr;

    cout << "\nPtr points to base";
    ptr = &p;
    ptr->display();

    cout << "\nPtr points to laptop";
    ptr = &l;
    ptr->display();

    l.details();

    return 0;
}