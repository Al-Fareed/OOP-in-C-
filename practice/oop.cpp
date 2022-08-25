#include<iostream>
#include<cstring>
using namespace std;
class Faculty
{
	public: char fname[15],lname[15],af[2];
	int eid,des;
	string degn;
	virtual void display_data()=0;
	 virtual void input()=0;
};
class workload:public Faculty
{
	public:int j,code,semID,subcode,credits,totwl,maxwl;
	string subname; 
	string name;
		void input();
		void cfa();
		void fmw();
		void cw();
		void display_data();
};
void workload::input()
{
		cout<<"Enter First Name:";
		cin>>fname;
		cout<<"Enter Last Name:";
		cin>>lname;
		cout<<"Enter Employee ID:";
		cin>>eid;
		dsign:cout<<"Enter Designation:";
		cin>>des;
		
		if(des==1)
		{
			degn="Professor";
		}
		else if(des==2)
		{
			degn="Associate Professor";
		}
		else if(des==3)
		{
			degn="Assistant Professor";
		}
		else
		{
			cout<<"Invalid no\nRe ";
			goto dsign;
		}
		
	cout<<"Enter number of subjects:";
	cin>>j;
	for(int i=0;i<j;i++)
	{
	re:
	cout<<"Enter Program code:";
	cin>>code;
	if(code==970)
	{
		name="MCA";
	}
	else if(code==907)
	{
		name="DSE";
	}
	else
	{
		cout<<"Invalid code\nRe ";
		goto re;
	}
	//Pro Name
	cout<<"Enter Semester ID:";
	cin>>semID;
	cout<<"Enter Subject Code:";
	cin>>subcode;
	cout<<"Enter Subject Name:";
	cin>>subname;
	cout<<"Enter Credits:";
	cin>>credits;
}
}
void workload::cfa()
{
	cout<<fname[0]<<lname[0];
}
void workload::fmw()
{
	if(des==1)
	{
		cout<<"6-12units/weel\n";
	}
	else if(des==2)
	{
		cout<<"22-24units/weel\n";
	}
	else if(des==3)
	{
		cout<<"26-28units/weel\n";
	}
	else
	{
		cout<<"Invalid\n";
	}
}
void workload::cw()
{
	int twl=(credits*2)+(credits*1);
	cout<<twl<<endl;
}
void workload::display_data()
{

	cout<<"\nProgram\tProgram\tSemester  Subject\tSubject Name\tCredits\tEmp\n";
	cout<<"Code\tName\tID\tCode\t\t\t\tID\n";
	cout<<"-----------------------------------------------------------------------------------------------\n";
	for(int i=0;i<j;i++)
	{
	cout<<code<<"\t"<<name<<"\t"<<semID<<"\t "<<subcode<<"\t\t"<<subname<<"\t\t"<<credits<<"\t"<<eid<<endl;
}
	cout<<"\nFaculty Emp ID:"<<eid;
	cout<<"\nFaculty Name"<<fname<<" "<<lname;
	cout<<"\nDesignation:"<<degn;
	cout<<"\nTotal workload:";workload::cw();
	
}
int main()
{
	int n;
	cout<<"Enter the number of faculty:";
	cin>>n;
	Faculty *fptr[10];
	workload w;
	for(int i=0;i<n;i++)
	{
		fptr[i]=&w;
		fptr[i]->input();
		 fptr[i]->display_data();
		
	}
	return 0;
}
