//Author Name: Al-Fareed
//Registration no: 210970049
//Date of creation: 4-Jan-2022 
//Program Name: Program to store details of Labours,Scientists and Managers.
//---------------------------------------------------------------------
#include<iostream>
using namespace std;
class Emp
{
        public:
		int empno;
        char name[15];
        void get()
        {
        	cout<<"\n---------------------------------------\n";
        	cout<<"\nEnter Employee Number:";
        	cin>>empno;
        	cout<<"Enter Employee Name:";
        	cin>>name;
		}
		void show()
		{
			cout<<"\nEmployee Number:"<<empno;
			cout<<"\nEmployee Name:"<<name;
		}
};
class Edu
{
	public:float cgpa;
	char degree[50];
	void get()
	{
		cout<<"\nEnter Highest Qualification:";
		cin>>degree;
		cout<<"\nEnter CGPA:";
		cin>>cgpa;
	}
	void show_edu()
	{
		cout<<"\nHighest Qualification:"<<degree;
		cout<<"\nCGPA:"<<cgpa;
	}
};
class Labour:public Emp
{
	public:
	void get(){
		Emp::get();
	}	
	void show()
	{
		Emp::show();
	}
};
class Scientist:public Emp, public Edu
{
	public:
		void get()
		{
			Emp::get();
			Edu::get();
		}
		void show()
		{
			Emp::show();
			Edu::show_edu();
		}
};
class Manager:public Emp, public Edu
{
	public:
		void get()
		{
			Emp::get();
			Edu::get();
		}
		void show()
		{
			Emp::show();
			Edu::show_edu();
		}	
};
int main()
{
	Manager m;
	Scientist s;
	Labour l;
	int flag=1,ch;
	while(flag)
	{
		cout<<"\nEnter details of";
		cout<<"\nOptions:\n1.Labour\n2.Scientist\n3.Manager\n4.Exit\n";
		cout<<"Enter your Option:";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n--Enter details of Labour--";
					l.get();
					cout<<"\n--Details of Labour is--";
					l.show();
					cout<<"\n---------------------------------------\n";
					break;
			case 2:cout<<"\n--Enter details of Scientist--";
					s.get();
					cout<<"\n--Details of Scientist is--";
					s.show();
					cout<<"\n---------------------------------------\n";
					break;
			case 3:cout<<"\n--Enter details of Manager--";
					m.get();
					cout<<"\n--Details of Manager is--";
					m.show();
					cout<<"\n---------------------------------------\n";
					break;
			case 4:flag=0;
					break;
		}
	}
	cout<<"\n";
	return 0;
	
}
