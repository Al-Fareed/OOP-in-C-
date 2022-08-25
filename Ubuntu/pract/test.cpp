#include<iostream>
using namespace std;
class media
{
        public:char title[10];
         float cost;
        virtual void get(){};
      virtual void disp(){};
};
class tv:public media
{
        public:int min;
            void get()
               {
                       cout<<"Enter Title:";
                       cin>>title;
                       cout<<"Enter minutes count:";
                       cin>>min;
                      
               }
               void disp()
               {
                    cout<<"Title:"<<title;
                       cout<<"\nMinute Count:"<<min;
                     
               }
};
class ott:public media
{
               public: char name[10];
                    int costpm;
        void get()
               {
                       cout<<"\nEnter OTT Name:";
                       cin>>name;
                       cout<<"Enter cost:";
                       cin>>cost;
                       cout<<"Enter cost per minute:";
                       cin>>costpm;
               }
               void disp()
               {
                       cout<<"OTT name:"<<name;
                       cout<<"\nCost:"<<cost;
                       cout<<"\nCost per minute:"<<costpm;
               }
};
int main()
{
        media *bptr[2];
        tv t;
        ott o;
        bptr[0]=&t;
        bptr[0]->get();
        bptr[0]->disp();
        bptr[1]=&o;
        bptr[1]->get();
        bptr[1]->disp();
        cout<<"\n";
return 0;
}
