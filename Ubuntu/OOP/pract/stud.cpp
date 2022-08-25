#include<iostream>
#include<cstring>
using namespace std;
class stud
{
	protected:int regno;
	char fname[15];
	char lname[15];
	string subcode;
	public:
	virtual void getdata()=0;
	virtual void showdata()=0;
	void print()
	{
		cout<<"Test Successfull\n ";
	
	}
};
class result:public stud
{
	int marks[3];
	int totmarks=0;
	public:
		void getdata()
		{
			cout<<"Enter Registeration number:";
			cin>>regno;
			cout<<"Enter First Name:";
			cin>>fname;
			cout<<"Enter Last Name:";
			cin>>lname;
			cout<<"Enter Course code:";
			cin>>subcode;
			for(int i=0;i<3;i++)
			{
				cout<<"Enter marks in subject :"<<i+1<<": ";
				cin>>marks[i];
				totmarks=totmarks+marks[i];
			}
		}
		void showdata()
		{
			
			cout<<"\nRegisteration number:"<<regno;
			cout<<"\nFirst Name:"<<fname;
			cout<<"\nLast Name:"<<lname;
			cout<<"\nCourse code:"<<subcode;
			for(int i=0;i<3;i++)
			{
				cout<<"\nmarks in each subject are: "<<i+1<<": "<<marks[i];
			}
			cout<<"\nTotal marks :"<<totmarks;
		}
};
int main()
{
	stud *sptr;
	result r;
	r.getdata();
	r.showdata();
	cout<<"\n";
	sptr=&r;
	sptr->print();
	return 0;
}

