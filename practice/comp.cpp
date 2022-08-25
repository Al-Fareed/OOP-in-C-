#include<iostream>
using namespace std;
class complex
{
	int img,real;
	public:complex()
	{
		img=0;
		real=0;
	}
	complex(int i, int r)
	{
			img=i;
			real=r;
	}
	void get()
	{
		cout<<"real :";
		cin>>real;
		cout<<"imaginary :";
		cin>>img;
	}
	void display()
	{
		cout<<"Complex number is: "<<real<<"+"<<img<<"i"<<endl;
	}
	friend complex add(int x, complex c1)
	{
		complex temp;
		temp.real=x+c1.real;
		temp.img=x+c1.img;
		return temp;
	}
	friend complex add(complex c1, complex c2)
	{
		complex res;
		res.real=c1.real+c2.real;
		res.img=c1.img+c2.img;
		return res;
	}
};
int main()
{
	complex c1,c2;
	int n;
	cout<<"\n-----------------------------------------\n";
	cout<<"i)Enter an integer: ";
	cin>>n;
	cout<<"Enter values for\n";
	c1.get();
	complex result;
	result=add(n,c1);
	cout<<"Addition of integer with ";
	result.display();
	cout<<"\n-----------------------------------------\n";
	cout<<"ii)Enter values for 2 complex numbers\n";
	c1.get();
	cout<<"First ";
	c1.display();
	c2.get();
	cout<<"Second ";
	c2.display();
	result=add(c1,c2);
	cout<<"Addition of two ";
	result.display();
	return 0;
}
