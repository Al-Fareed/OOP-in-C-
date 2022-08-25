//Author Name: Al-Fareed
//Registration no: 210970049
//Date of creation: 4-Jan-2022 
//Program Name: Program to perform evaluation of a student's performance
//---------------------------------------------------------------------
#include<iostream>
using namespace std;
class student
{

	int rollno;
	char name[20]; 
	public: 
		void read_data()
		{
			cout<<"\nEnter the rollno: ";
			cin>>rollno;
			cout<<"\nEnter the name: ";
			cin>>name;
		}
		  void display()
		
		{
			cout<<"\n"<<rollno<<"\t"<<name;
		}
};

class Exam : virtual public student
{
	protected: 
		int marks[4],i;
	public: 
		void read_marks()
		{
		cout<<"\nEnter marks in 4 subjects (out of 20): ";
			for(i=0;i<4;i++)
				cin>>marks[i];
		}
		void marks_display()
		{
			for(i=0;i<4;i++)
				cout<<"\t"<<marks[i];
		}
};


class Sports : virtual public student
{

	protected:	
	int sports_marks;
	public: void read_sports_marks()
		{
			cout<<"\nEnter marks scored in sports (out of 20): ";
			cin>>sports_marks;
		}
		
		void sm_display()
		{

			cout<<"\t"<<sports_marks;
		}
};

class Result : public Exam, public Sports
{
	float total, avg;
	public: void calc()
		{
			
		for(i=0;i<4;i++)
		total+=marks[i];
		total=total+sports_marks;
		avg=total/5;
		}

		void result_display()
		{
			
			Exam::marks_display();
			Sports::sm_display();
			cout<<"\t"<<total<<"\t"<<avg<<endl;
		}
};
int main()
{
	Result r;
	r.read_data();
	r.read_marks();
	r.read_sports_marks();
	r.calc();

	cout<<"\nRollno\tName\tM1\tM2\tM3\tM4\tSports\tTotal\tAverage";
	cout<<"\n------------------------------------------------------------------------";
	r.display();
	r.result_display();
	return 0;
}





