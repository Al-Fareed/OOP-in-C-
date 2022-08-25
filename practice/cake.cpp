//Author name:Al-Fareed
//Reg No:210970049
//Date Of Creation:18-Jan-22
//Program:Cake
//-----------------------------
#include<iostream>
using namespace std;
class CakeOrder
{
        public:string flav,cktype;
               int ordno,adnflav,weight,qty,price,type;
               int custno;
               char name[50];
               int h,m,d;
               virtual void computePrice()=0;
               void get()
               {
                       cout<<"Enter your Name:";
                       cin>>name;
                       cout<<"Enter number:";
                       cin>>custno;
                       cout<<"Enter Additional flavours required:";
                       cout<<"\n1.Vanilla\n2.Butterscotch\n3.Chocolate\n4.Red Velvet\n5.Pista\n";
                       cin>>adnflav;
                       switch(adnflav)
                       {
                               case 1:flav="Vanilla";
                                      break;
                                case 2:flav="ButterScotch";
                                       break;
                                 case 3:flav="Chocolate";
                                        break;
                                case 4:flav="Red Velevet ";
                                       break;
                                 case 5:flav="Pista";
                                        break;
                       }
                cout<<"Enter the Weight of the cake required(in kgs):";
                cout<<"\n1.0.5kg\t2.2kg\t3.4kg\t4.6kg\n";
                cin>>weight;
                cout<<"Enter Date:";
                cin>>d;
                cout<<"Enter the Quantity required:";
                cin>>qty;
                cout<<"Enter the type of Cake:";
                cout<<"\n1.Tranquil Cake\n2.Birthday Cake\n3.Wedding Cake\n";
                cout<<"Enter your choice";
                cin>>type;
                 switch(type)
                       {
                               case 1:cktype="Tranquil Cake";
                                      break;
                                case 2:cktype="Birthday Cake";
                                       break;
                                 case 3:cktype="Wedding Cake";
                                        break;
                       }
               }
               void set()
               {
                       h=04;
                       m=05;
                       price=100;
                       ordno=1001;
               }
               void printBill()
               {
                cout<<"\n------------------------------------------------------------------------------\n";
                       cout<<"\t\t\tCake Loft\n";
                       cout<<"Date:"<<d<<"-Jan-22\t\t\t\tTime Of Order:0"<<h<<":"<<m<<endl;
                       cout<<"\n\t\tCake Type:"<<cktype<<endl;
                       cout<<"\t\tOrder:"<<ordno<<endl;
                       cout<<"\t\tCustomer:"<<custno;
                       cout<<"\n\t\tCustomer Name:"<<name;
                       cout<<"\n\t\tOrder quantity:"<<qty;
                       cout<<"\n------------------------------------------------------------------------------\n";
                       cout<<"Seriel    Name Of Cake    Flavour         Weight(in kg)   Unit Price\n";
                       cout<<"\n\n----------------------------------------------------------------------------------\n";
                       cout<<"1001      Cake1           "<<flav<<"      "<<weight<<" \t\t\t"<<price<<endl;
                       cout<<"\n\n----------------------------------------------------------------------------------\n";
                       cout<<"                                                          Total bill:"<<price*qty;
               }
};
class Temptation:public CakeOrder
{
        public:void computePrice()
               {
                       float tprice=(qty*price)+12.50;
                       cout<<tprice<<endl;
               }
};
class BirthdayBash:public CakeOrder
{
        public:
                void computePrice()
                {
                float tprice=(qty*price)+50;
                cout<<tprice<<endl;
                }
};
class WishfulWed:public CakeOrder
{
        public:
                void computePrice()
                {
                        float tprice=(qty*price)+175.50;
                        cout<<tprice<<endl;
                }
};
int main()
{
        CakeOrder *ckptr[10];
        Temptation t;
        BirthdayBash b;
        WishfulWed w;
        int n;
        cout<<"Enter the number of orders:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
                ckptr[i]=&t;
                ckptr[i]->get();
                ckptr[i]->set();
        }
        for(int i=0;i<n;i++)
        {
                ckptr[i]->printBill();
        }
        cout<<"\n";
        return 0;
}
