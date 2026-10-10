#include<iostream>
using namespace std;
class product
{
    int pro_code[50];
    float pro_price[50];
    int count;
    public:
           void cnt()
           {
            count=0;
           }
           void getproduct();
           void displaysum();
           void displayproduct();
};
void product::getproduct()
{
    cout<<"Enter the product code :";
    cin>>pro_code[count];
    cout<<"Enter the product cost :";
    cin>>pro_price[count];
    count++;
}
void product::displaysum()
{
    float sum=0;
    for(int i=0;i<count;i++)
    sum =sum+pro_price[i];
    cout <<"total value:"<<sum<<"\n";
}
void product::displayproduct()
{
    cout<<"\ncode\tprice\n";
    for(int i=0;i<count;i++)
    {
        cout<<pro_code[i];
        cout<<"\t"<<pro_price[i];
        cout<<"\n";
    }
    cout<<"\n";
}
int main()
{
    product obj;
    obj.cnt();
    int x;
    do
    {
        cout<<"enter choice\n";
        cout<<"\n-----------";
        cout<<"\n1.Add a product";
        cout<<"\n2.Display a product  total value";
        cout<<"\n3.Display all product";
        cout<<"\n4.Quit";
        cin>>x;

        switch(x)
        {
            case 1: obj.getproduct();
                    break;
            case 2: obj.displaysum();
                    break;
            case 3: obj.displayproduct();
                    break;
            case 4: break;
            default: cout<<"\nInvalid choice";
        }
    } 
    while(x!=4);

    return 0;
}

