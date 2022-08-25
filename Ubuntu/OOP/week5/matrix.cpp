//Author Name:Al-Fareed
//Reg No.:210970049
//Date Of Creation:4-Dec-2022
//Name of Program:Program to perform addition and subtraction on matrices using 
//using operator overloading..
//---------------------------------------------------
#include<iostream>
using namespace std;

class matrix
{
	int a,b;
        int arr[9][9];
    public:
matrix()
{
	a=b=0;
}
matrix(int x,int y)
{
	a=x;
	b=y;
}
void accept()
{
        
        for(int i=0; i<a; i++)
        {
                for(int j=0; j<b; j++)
                {
                        cout<<" ";
                        cin>>arr[i][j];
                }
        }
}
void display()
{
        for(int i=0; i<a; i++)
        {
                cout<<" ";
                for(int j=0; j<b; j++)
                {
                        cout<<arr[i][j]<<"\t";
                }
                cout<<"\n";
        }
}

int operator == (matrix m)
		{ 
			if(a==m.a && b==m.b)
				return 1;
			else
				return 0;
		}
matrix operator + (matrix x)     //addition 
{
        matrix m5;
        for(int i=0; i<a; i++)
        {
                for(int j=0; j<b; j++)
                {
                        m5.arr[i][j]=arr[i][j]+x.arr[i][j];
                }
                m5.a=a;
                m5.b=b;
        }
        return m5;
}
matrix operator - (matrix x)     //subtraction 
	{
        matrix m6;
        for(int i=0; i<a; i++)
        {
                for(int j=0; j<b; j++)
                {
                        m6.arr[i][j]=arr[i][j]-x.arr[i][j];
                }
                m6.a=a;
                m6.b=b;
        }
        return m6;
		}

};

int main()
{
		int m,n,i,j;
		cout<<"Enter the size of the 1st matrix:";
		cin>>m>>n;
		matrix m1(m,n),m4,m3;
		cout<<"Enter the size of the 2nd matrix:";
		cin>>i>>j;
		matrix m2(i,j);
		if(m1==m2)
		{
			cout<<"\n Enter Matrix Elements for 1st matrix: \n";
			m1.accept(); 
			cout<<"\n Entered 1st Matrix is: \n";
			m1.display(); 
			cout<<"\n Enter Matrix Elements for 2nd matrix: \n";
			m2.accept();	          
	        cout<<"\n Entered 2nd Matrix is: \n";
	        m2.display(); 
		   	m3 = m1 + m2;
			cout<<"Addition of two matrices are:\n";
		   	m3.display();
			cout<<"Subtraction of two matrices are:\n";
			m4 = m1 - m2;
			m4.display(); 
		}
		else
		{
			cout<<"Entered size doesn't match";
		}
              
        return 0;
}
