#include<iostream>
using namespace std;
int main()
{
    int denom[10]={2000,500,200,100,50,20,10,5,2,1};
    int cur[10],n[10],bill,amt;
    int i=0,k=0;
    cout<<"Enter the amount recieved from the customer:";
    cin>>amt;
    cout<<"Enter the total bill:";
    cin>>bill;
    int ret_amt=amt-bill;
    cout<<"The amount to be returned is:"<<ret_amt;
    while(ret_amt>0)
    {
        if(ret_amt/denom[i]>0)
        {
            cur[k]=denom[i];
            n[k]=ret_amt/denom[i];
            ret_amt=ret_amt%denom[i];
            k++;
        }
        i++;
    }
    for(int j=0;j<k;j++)
    {
        cout<<"\n"<<cur[j]<<" rupees "<<n[j];
    }
    cout<<"\n";
    return 0;
}
