#include<iostream>
#include<string>
using namespace std;
class person
{
    char*name;
    public:
    person(char*name)
    {
        this->name=name;
}
void printname()
{
    cout<<name<<endl;
}
};
int main()
{
    person
    p("Dinesh");
    p.printname();
    return 0;
}