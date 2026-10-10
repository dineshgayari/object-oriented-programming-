#include<iostream>
using namespace std;
class account
{
    private:
    string name;
    int accno;
    string atype;
    public:
    void getaccountdetails()
    {
        cout<<"\n enter customer name:";
        cin>>name;
        cout<<"\n enter account number:";
        cin>>accno;
        cout<<"enter account type:";
        cin>>atype;
    }
    void displaydetails()
    {
        cout<<"\n\n customer name:"<<name;
        cout<<"\n account number:"<<accno;
        cout<<"\n account type:"<<atype;
    }
};
class current_account:public account
{
    private:
    float balance;
    public:
    void c_display()
    {
        cout<<"\nbalance:"<<balance;
    }
    void c_deposit()
    {
        float amount;
        cout<<"\n enter amount to deposit:";
        cin>>amount;
        balance=balance+amount;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nbalance:"<<balance;
        cout<<"\n enter amount to withdraw:";
        cin>>withdraw;
        if(balance>1000)
        {
            balance=balance-withdraw;
            cout<<"\nbalance amount after withdraw:"<<balance;
        }
        else
        {
            cout<<"\n\ninsufficient balance";
        }
    }
};

class savings_account:public account
{
    private:
    float sav_balance;
    public:
    void s_display()
    {
        cout<<"\nbalance:"<<sav_balance;
    }
    void s_deposit()
    {
        float deposit,interest;
        cout<<"\n enter amount to deposit:";
        cin>>deposit;
        sav_balance=sav_balance+deposit;
        interest=(sav_balance*2/100);
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nbalance:"<<sav_balance;
        cout<<"\n enter amount to withdraw:";
        cin>>withdraw;
        if(sav_balance>500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nbalance amount after withdraw:"<<sav_balance;
        }
        else
        {
            cout<<"\n\ninsufficient balance";
        }
    }
};
int main()
{
    current_account c1;
    savings_account s1;
    char type;
    int choice;
    cout<<"\n enter S for saving customer and C for current a/c customer:";
    cin>>type;
    if(type=='s'||type=='S')
    {
        s1.getaccountdetails();
        while(1)
        {
            cout<<"\nchoose your choice"<<endl;
            cout<<"1) deposit"<<endl;
            cout<<"2) withdraw"<<endl;
            cout<<"3) display balance"<<endl;
            cout<<"4) display with full details"<<endl;
            cout<<"5) exit"<<endl;
            cout<<"\n enter your choice:";
            cin>>choice;
            switch(choice)
            {
                case 1:
                s1.s_deposit();
                break;
                case 2:
                s1.s_withdraw();
                break;
                case 3:
                s1.s_display();
                break;
                case 4:
                s1.displaydetails();
                s1.s_display();
                break;
                case 5:
                goto end;
                default:
                cout<<"\n\n entered choice is invalid,\"TRY AGAIN\"";
        }
    }
}
else if(type=='c'||type=='C')
{
    c1.getaccountdetails();
    while(1)
    {
        cout<<"\nchoose your choice"<<endl;
        cout<<"1) deposit"<<endl;
        cout<<"2) withdraw"<<endl;
        cout<<"3) display balance"<<endl;
        cout<<"4) display with full details"<<endl;
        cout<<"5) exit"<<endl;
        cout<<"enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            c1.c_deposit();
            break;
            case 2:
            c1.c_withdraw();
            break;
            case 3:
            c1.c_display();
            break;
            case 4:
            c1.displaydetails();
            c1.c_display();
            break;
            case 5:
            goto end;
            default:
            cout<<"\n\n entered choice is invalid,\"TRY AGAIN\"";
        }
    }
}
else
{
    cout<<"\ninvalid account selection";
}
end:
    cout<<"\nthank you for banking with us";
    return 0;
}
