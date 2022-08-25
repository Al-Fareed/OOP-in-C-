//Author Name:Al-Fareed
//Date of Creation:14-Dec-2021
//Registeration Number:210970049
//Name of Program:Program to compute the inverse of an integerandthe double of the inverse.
//-----------------------------------------
#include<iostream>
using namespace std;
void inverse(int num)
{
        int dub,rem=0,rev=0;
        while(num!=0)
        {
                rem=num%10;
                num=num/10;
                rev=rev*10+rem;
        }
        cout<<"Reverse is:"<<rev;
        dub=rev*2;
        cout<<"\nDouble of the reverse number is:"<<dub<<endl;
}
int main()
{
        int num;
        cout<<"Enter a number:";
        cin>>num;
        inverse(num);
        return 0;
}
