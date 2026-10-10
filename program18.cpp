#include <iostream>
using namespace std;
// Declaring an Abstract class
class Pattern
{
protected:
float l;
public:
void getInput ()
{
cin >> l ;
}
// Pure virtual Function
virtual float totalArea () = 0;
};
class Squared : public Pattern
{
public:
float totalArea ()
{
return l * l ;
}
};
class Circle : public Pattern
{
public:
float totalArea ()
{
return 3.14 * l * l ;
}
};
int main()
{
Squared s ;
Circle c;
cout << " Please enter the length for calculating the area of a square : " ;
s.getInput () ;
cout << " Hence the Area of square : " << s.totalArea () ;
cout << " \n Please enter radius for calculating the area of a circle : " ;
c.getInput () ;

cout << " Hence the Area of circle: " << c.totalArea () ;
return 0;
}