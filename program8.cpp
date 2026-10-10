#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;
    public:
    student(int,const char[],double);
    student(student &t)   // copy constructor
    {
        rno=t.rno;
        strcpy(name,t.name);
        fee=t.fee;
    }
    void display();
};
student::student(int no , const char n[],double f)
{
    rno=no;
    strcpy(name,n);
    fee=f;
}
void student::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}

int main()
{
    student s(1001, "Dinesh", 10000);
    s.display();
    student dinesh(s);  // copy constructor is called
    dinesh.display();

    return 0;
}