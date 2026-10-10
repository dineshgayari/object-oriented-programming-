#include<iostream>
using namespace std;

class Distance
{
    int feet,inches;
    public:
    void getdata()
    {
        cin>>feet>>inches;
    }
    void sum(Distance d1,Distance d2)
    {
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        if(inches>=12)
        {
            feet=feet+inches/12;
            inches=inches%12;
        }
    }
    void displaydata()
    {
        if(inches>=12)
        {
           feet=feet+inches/12;
           inches=inches%12; 
        }
        cout<<feet<<" feet "<<inches<<" inches"<<endl;      
    }
};
int main()
{
    Distance d1,d2,d3;
    cout<<"enter distance 1 in feet and inches:\n";
    d1.getdata();
    cout<<"enter distance 2 in feet and inches:\n";
    d2.getdata();
    cout<<"distance1:";
    d1.displaydata();
    cout<<"distance2:";
    d2.displaydata();
    d3.sum(d1,d2);
    cout<<"sum of both the distances is:";
    d3.displaydata();

    return 0;
}