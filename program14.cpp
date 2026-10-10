#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    char name[200];

public:
    void accept_person_details()
    {
        cout << "\nEnter Id : ";
        cin >> id;

        cout << "Enter Name : ";
        cin >> name;
    }

    void display_person_details()
    {
        cout << "\nId : " << id;
        cout << "\nName : " << name;
    }
};

class Teaching : virtual public Person
{
protected:
    char subject_name[100];
    char teacher_name[200];

public:
    void accept_teacher_details()
    {
        accept_person_details();

        cout << "Enter Subject Name : ";
        cin >> subject_name;

        cout << "Enter Teacher Name : ";
        cin >> teacher_name;
    }

    void display_teacher_details()
    {
        display_person_details();

        cout << "\nSubject Name : " << subject_name;
        cout << "\nTeacher Name : " << teacher_name;
    }
};

class NonTeaching : virtual public Person
{
protected:
    char dept_name[200];

public:
    void accept_nonteaching_details()
    {
        cout << "Enter Department Name : ";
        cin >> dept_name;
    }

    void display_nonteaching_details()
    {
        cout << "\nDepartment Name : " << dept_name;
    }
};

class Instructor : public Teaching, public NonTeaching
{
public:
    void accept_instructor_details()
    {
        accept_teacher_details();
        accept_nonteaching_details();
    }

    void display_instructor_details()
    {
        cout << "\n\n----- Instructor Details -----";

        display_teacher_details();
        display_nonteaching_details();
    }
};

int main()
{
    Instructor *inst;
    int cnt, i;

    cout << "Enter No. of Instructor Details You Want? : ";
    cin >> cnt;

    inst = new Instructor[cnt];

    for (i = 0; i < cnt; i++)
    {
        cout << "\n\nEnter Details of Instructor " << i + 1 << ":\n";
        inst[i].accept_instructor_details();
    }

    cout << "\n\n========== OUTPUT ==========\n";

    for (i = 0; i < cnt; i++)
    {
        cout << "\nInstructor " << i + 1 << ":";
        inst[i].display_instructor_details();
        cout << "\n";
    }

    delete[] inst;

    return 0;
}