//Author Name:Al-Fareed
//Date of Creation:14-Dec-2021
//Registeration Number:210970049
//Name of Program:Program to swapping two integers, floats, and characters
//-------------------------------------------------------------------------------
#include<iostream>
using namespace std;
void swap(int a,int b)
{
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"After Interchanging Integer values of a:"<<a<<"b:"<<b<<endl;
}

void swap(float a,float b)
{
        float temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"After Interchanging floating values of a:"<<a<<"b:"<<b<<endl;
}
void swap(char a,char b)
{
        char temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"After Interchanging characters a:"<<a<<"b:"<<b<<endl;
}
int main()
{
        int n1,n2;
        float f1,f2;
        char c1,c2;
        cout<<"Enter two integers:";
        cin>>n1>>n2;
        swap(n1,n2);
        cout<<"Enter two floating values:";
        cin>>f1>>f2;
        swap(f1,f2);
        cout<<"Enter two character values:";
        cin>>c1>>c2;
        swap(c1,c2);
        return 0;
}
