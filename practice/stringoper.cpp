
#include<iostream>
using namespace std;
class strcomp
{

	public:
		char str[20];
		void getdata()
		{
			cin>>str;
		}
		void display()
		{
			cout<<str;
		}
		friend int operator <= (strcomp m1,strcomp m2);
};
int operator <= (strcomp m1,strcomp m2)
{
	int i=0;
	while((m1.str[i]==m2.str[i]) && (m1.str[i]!='\0' || m2.str[i]!='\0'))
	{
		i++;
	}
	return (m1.str[i]-m2.str[i]);
	
}

int main()
{
	strcomp m1,m2;
	cout<<"Enter the First String:";
	m1.getdata();
	cout<<"Enter the Second String :";
	m2.getdata();
	int result=m1<=m2;
	if(result<0)
	{
		cout<<m1.str<< "string is less than "<<m2.str<<endl;
	}
	else if(result==0)
	{
		cout<<"both strings are equal\n";
	}
	else
	{
		cout<<m1.str<< "is greater than"<<m2.str<<endl;
	}
	return 0;
}



