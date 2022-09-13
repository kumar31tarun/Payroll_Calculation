#include<iostream>
using namespace std;
int main()
{
    float regular;
    float overtime=0;
    float rate,base,extra,gross=0,tax=0;
    float net;
    cout<<"Enter the regular hours you worked last week:";
    cin>>regular;
    while(regular<0 || regular>40)
    {
        cout<<"value entered is out of limit from 0 to 40, please enter again: ";
        cin>>regular;
    }
    if(regular==40)
    {
        do
        {
            cout<<"enter the overtime hours you worked: ";
            cin>>overtime;
        }while(overtime<=20);
        cout<<"You cant enter hours more than 20 in overtime, enter again: ";
        cin>>overtime;
    }

     cout<<"\nEnter your hourly rate for work: ";
     cin>>rate;
    while(rate<0)
    {
        cout<<"Invalid Input";
        cout<<"\nEnter your hourly rate for work: ";
        cin>>rate;
    }
    base=regular*rate;
    extra=overtime*rate*1.5;
    gross=base+extra;
    if(gross>2000)
    {
        tax=0.25*gross;
    }
    else
    {
        tax=0.15*gross;
    }
    net=gross-tax;
    cout<<"PAYROLL INFO";
    cout<<"\n ------------";
    cout<<"\nHours worked: "<<regular;
    cout<<"\nHourly rate: "<<rate;
    cout<<"\nOvertime hours: "<<overtime;
    cout<<"\nOvertime pay: "<<extra;
    cout<<"\nGross pay: "<<gross;
    cout<<"\nTax: "<<tax;
    cout<<"\nNet pay: "<<net<<endl;
    
    return 0;
}