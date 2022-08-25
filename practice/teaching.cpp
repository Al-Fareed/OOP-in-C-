//Author Name: Nidhi R Shetty
//Registration no: 210970045
//Date of creation: 11/01/2022 
//Program Name: Program to design classes using hierarchical inheritance

#include<iostream>
using namespace std;
class person
{
	int id;
	char name[20];
	public: void accept()
		{
			cout<<"\nEnter id: ";
			cin>>id;
			cout<<"\nEnter name: ";
			cin>>name;
		}
		void display()
		{
			cout<<"\n"<<id<<"\t"<<name;
		}
};

class Teaching : public person
{
	char subject[20];
	public: void accept()
		{
			person::accept();
			cout<<"\nEnter the subject name: ";
			cin>>subject;
		}

		void display()
		{
			person::display();
			cout<<"\t"<<subject;
		}
};

class NonTeaching : public person
{
	char dept[20];
	public: void accept()
		{
			person::accept();
			cout<<"\nEnter the department: ";
			cin>>dept;
		}
		void display()
		{
			person::display();
			cout<<"\t"<<dept;
		}
};

class instructor : public person
{
	char ins_dept[20];
	public: void accept()
		{
		person::accept();
		cout<<"\nEnter department of instructor: ";
		cin>>ins_dept;	
		}
		void display()
		{
			person::display();
			cout<<"\t"<<ins_dept<<endl;
		}
};

int main()
{
	int a,b,c,i;
	cout<<"\nEnter the number of teaching faculty: ";
	cin>>a;

	cout<<"\nEnter the number of non - teaching faculty: ";
	cin>>b;

	cout<<"\nEnter the number of instructors: ";
	cin>>c;

	Teaching obj1[a];
	NonTeaching obj2[b];
	instructor obj3[c];

	cout<<"\nEnter the details of "<<a<<" teaching faculty"<<endl;
	for(i=0;i<a;i++)
	{
		obj1[i].accept();
	}

	cout<<"\nEnter the details of "<<b<<" non teaching faculty"<<endl;
	for(i=0;i<b;i++)
	{
		obj2[i].accept();
	}

	cout<<"\nEnter the details of "<<c<<" instructors "<<endl;
	for(i=0;i<c;i++)
	{
		obj3[i].accept();
	}

	cout<<"\nDetails of teaching faculty"<<endl;
	cout<<"---------------------------------------";
	cout<<"\nID\tName\tSubject";
	cout<<"\n---------------------------------------";
	for(i=0;i<a;i++)
	{
		obj1[i].display();
	}

	cout<<"\n\nDetails of non teaching faculty"<<endl;
	cout<<"-----------------------------------------";
	cout<<"\nID\tName\tDepartment";
	cout<<"\n----------------------------------------";
	for(i=0;i<b;i++)
	{
		obj2[i].display();
	}

	cout<<"\n\nDetails of instructors"<<endl;
	cout<<"------------------------------";
	cout<<"\nID\tName\tDepartment";
	cout<<"\n--------------------------------";
	for(i=0;i<c;i++)
	{
		obj3[i].display();
	}
	return 0;
}


			


