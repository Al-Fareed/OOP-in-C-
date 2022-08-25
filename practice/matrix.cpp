
#include<iostream>
using namespace std;
class matrix
{
	private: int m[5] [5];
		 int row,column;
	public: void getdata()
		{
			cout<<"Enter the number of rows\n";
			cin>>row;
			cout<<"ENter the number of columns\n";
			cin>>column;
			cout<<"Enter the elements of the matrix\n";
			for(int i=0;i<row;i++)
			{
				for(int j=0;j<column;j++)
				{
					cin>>m[i][j];
				}
			}
		}
		
	 matrix operator + (matrix );
	 matrix operator - (matrix );

	int  operator ==(matrix m)
	{
		if((row==m.row)&&(column==m.column))
		return 1;
		else
			return 0;
	}
	 void display();
};
matrix matrix::operator + (matrix ma)
	{
		matrix result;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
			{
				
				result.m[i][j]=m[i][j]+ma.m[i][j];
			}
			cout<<"result.ro"<<row<<endl;
			result.row=row;
			cout<<"result.col"<<column<<endl;
			result.column=column;
		}
		return result;
	}


matrix matrix::operator -  (matrix ma)
	{
		matrix result;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<column;j++)
			{
				
				result.m[i][j]=m[i][j]-ma.m[i][j];
			}
			result.row=row;
			result.column=column;
		}
		return result;
	}

			void matrix:: display()
			{
				cout<<"Matrix is:"<<endl;
				for(int i=0;i<row;i++)
			{
				for(int j=0;j<column;j++)
				{
					cout<<m[i][j]<<" ";
				}
				cout<<endl;
			}
		}


int main()
{
	matrix m1,m2,m3,m4;
	cout<<"------------------------------";
	cout<<"Enter the values for Matrix1"<<endl;
	m1.getdata();
	cout<<"Enter the values for Matrix 2"<<endl;
	m2.getdata();
	if(m1==m2)
	{
		m3=m1+m2;
		cout<<"Addition of two matrices"<<endl;
	m3.display();
		m4=m1-m2;
		cout<<"Subraction of two matrices"<<endl;
		m4.display();
	}

	else
		cout<<"two matrices are unequal:";
	return 0;
}

