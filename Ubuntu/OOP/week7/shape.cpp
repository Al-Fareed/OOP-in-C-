//Author Name: Al-Fareed
//Registration no: 210970049
//Date of creation: 4-Jan-2022 
//Program Name: Program to calculate area of given shapes.
//---------------------------------------------------------------------
#include<iostream>
using namespace std;
class shape
{
        protected:
                double val1,val2,ar_tri,ar_rect;
        public:
                void get_data(double a,double b)
                {
                        val1=a;
                        val2=b;
                        ar_rect=val1*val2;
                        ar_tri=0.5*val1*val2;
                }
                virtual void display_area()=0;
};
class triangle:public shape
{
        public:
                void display_area()
                {
                        cout<<"Area of the triangle :"<<ar_tri<<endl;
                }
};

class rectangle:public shape
{
        public:
                void display_area()
                {
                        cout<<"Area of the rectangle :"<<ar_rect<<endl;
                }
};
int main()
{
        double val1,val2;
        cout<<"Enter two values:"<<endl;
        cin>>val1>>val2;
        shape *bptr;
        bptr=new rectangle;
        bptr->get_data(val1,val2);
        bptr->display_area();
        bptr=new triangle;
        bptr->get_data(val1,val2);
        bptr->display_area();
}
