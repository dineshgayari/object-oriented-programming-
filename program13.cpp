#include <iostream>
using namespace std;

class AddData
{
protected:
    int subjects[6], i;

public:
    void accept_details()
    {
        cout << "\nEnter Marks for Six Subjects";
        cout << "\n\n";

        cout << "\nHindi : ";
        cin >> subjects[0];

        cout << "\nEnglish : ";
        cin >> subjects[1];

        cout << "\nSanskrit : ";
        cin >> subjects[2];

        cout << "\nSocial Science : ";
        cin >> subjects[3];

        cout << "\nMaths : ";
        cin >> subjects[4];

        cout << "\nScience : ";
        cin >> subjects[5];
    }
};

class Total : public AddData
{
protected:
    int total;

public:
    void total_of_six_subjects()
    {
        total = subjects[0] + subjects[1] + subjects[2]
              + subjects[3] + subjects[4] + subjects[5];
    }
};

class Percentage : public Total
{
private:
    float per;

public:
    void calculate_percentage()
    {
        per = total / 6.0;
    }

    void show_result()
    {
        cout << "\n\n";
        cout << "Total Marks : " << total;
        cout << "\nPercentage of a Student : " << per << "%";
    }
};

int main()
{
    Percentage p;

    p.accept_details();
    p.total_of_six_subjects();
    p.calculate_percentage();
    p.show_result();

    return 0;
}
