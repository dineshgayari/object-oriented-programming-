#include<iostream>
using namespace std;
class Record 
{
    public:
    char name[20];
    int regno;
    int marks,m1,m2,m3;
    float avg;
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter regno: ";
        cin>>regno;
        cout<<"Enter the m1,m2,m3:\n: ";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        avg=(m1+m2+m3)/3;
    }
    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nRegno: "<<regno;
        cout<<"\nMarks: "<<m1;
        cout<<"\nMarks: "<<m2;
        cout<<"\nMarks: "<<m3;
        cout<<"\nAverage: "<<avg;
    }
};
int main()
{
    Record r;
    r.getdata();
    r.calculate();
    r.display();

    return 0;
}