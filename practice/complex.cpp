#include <iostream>
using namespace std;
class complex
{
        int real,img;
        public :complex()
                {
                        real=0;
                        img=0;
                }
                complex (int x,int y)
                {
                        real=x;
                        img=y;
                }
                void get()
                {       
						cout<<"Enter real number";
                        cin>>real;  
						cout<<"Enter Imaginary number";
                        cin>>img;        
				}
				void display()
                {
                        cout<<"Complex number 2 : "<<real<<"+"<<img<<"i"<<endl;

                }
friend complex add(complex,complex);
friend complex add(int,complex);
};
complex add(complex c1, complex c2)
{
	complex res;
	res.real = c1.real + c2.real;
	res.img = c1.img + c2.img;
	return res;
}
 complex add(int x ,complex c1)
{
	complex temp;
	temp.real=x+c1.real;
	temp.img=x+c1.img;
	return temp;
}
int main()
{
	complex c1,c2;
	cout<<"ii)";
	c1.get();
	c2.get();
	complex result;
	result=add(c1,c2);
	result.display();
	cout<<"i)Enter Number to add with first complex number"<<endl;
	int n;
	cin>>n;
	result=add(n,c1);
	result.display();
}
