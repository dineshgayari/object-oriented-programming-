#include<iostream>
using namespace std;
class Numbers
{
int x, y, z;
public:
void accept()
{
cout<<"\n Enter Three Numbers";
cout<<"\n ";
cout<<"\n First Number : ";
cin>>x;
cout<<"\n Second Number : ";
cin>>y;
cout<<"\n Three Number : ";
cin>>z;
cout<<"\n ";
}
void display()
{
cout<<" "; cout<<x<<"\t"<<y<<"\t"<<z;
}
void operator-()
{
x=-x;
y=-y;
z=-z;
}
};
int main()
{
Numbers num;
num.accept();
cout<<"\n Numbers are :\n\n";
num.display();
-num; //Overloaded Unary (-) Operator
cout<<"\n\n Negated Numbers are :\n\n";
num.display();
return 0;
}