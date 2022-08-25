//Author Name:Al-Fareed
//Date of Creation:14-Dec-2021
//Registeration Number:210970049
//Name of Program:Program to input n number employees data, calculate and display.
//-----------------------------------------
#include<iostream>
using namespace std;
struct emp
{
        char name[50];
        int empno;
        float basic,da,it,netsal,gross;
        void input();
        void calculate();
        void display();
};
void emp::input()
{

        cout<<"Enter Employee Name:";
        cin>>name;
        cout<<"Enter the Employee Number:";
        cin>>empno;
        cout<<"Enter Basic Salary:";
        cin>>basic;
}
void emp::calculate()
{
        da=basic*0.12;
        gross=basic+da;
        it=gross*0.18;
        netsal=gross-it;
}

void emp::display()
{
        cout<<"--------------------------------------------------------\n";
        cout<<"Employee : "<<name<<" Informations are:\n";
        cout<<"The Employee number is:"<<empno<<endl;
        cout<<"The SAlary is:"<<basic<<endl;
        cout<<"The DA is:"<<da<<endl;
        cout<<"The Gross Salary is:"<<gross<<endl;
        cout<<"The Tax is:"<<it<<endl;
        cout<<"The Net Salary is:"<<netsal<<endl;
}
int main()
{
        int i,n;
        cout<<"Enter the number of employees:";
        cin>>n;
        emp e[n];
        for(i=0;i<n;i++)
        {
                e[i].input();
                e[i].calculate();
        }
        for(i=0;i<n;i++)
        {
                e[i].display();
        }
        return 0;
}

