#include<iostream>
using namespace std;
class person
{
        public:int id;
                  char name[15];

        void get()
        {
                cout<<"Enter Person ID:";
                cin>>id;
                cout<<"Enter Name of the Person:";
                cin>>name;
        }
       void show()
        {
                cout<<"\nPerson ID:"<<id;
                cout<<"\nName of the Person:"<<name;
        }
};
class teaching:public person
{
        char sub[10];
        char name[10];
        public: void get()
        {
               person::get();
                cout<<"Enter the Subject:";
                cin>>sub;
        }
        void show()
        {
              person::show();
                cout<<"\nSubject:"<<sub;
        }

};
class nonteach:public person
{
        char dept[25];
        public:void get()
        {
                 person::get();
                cout<<"Enter the dept:";
                cin>>dept;
        }
        void show()
        {
                 person::show();
               cout<<"\nDepartment:"<<dept;

        }
};
class instructor:public person
{
	public:void get()
	{
 person::get();
}
void show()
{
 person::show();
}
};
int main()
{
	instructor in[10];
        nonteach nt[10];
        teaching t[10];
	int n,m,l,flag=1;
	while(flag){
	cout<<"\nOptions:\n1.Teaching\n2.Non Teaching\n3.Instructors\n4.Exit\n";
	cout<<"Enter your choice:";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"Enter the number of teachers:";
		cin>>n;
		cout<<"------------------------------------------------\n";
		for(int i=0;i<n;i++)
		{
		t[i].get();
		}
		cout<<"teachers details are:";
		for(int i=0;i<n;i++)
		{
			t[i].show();
			}
			cout<<"\n------------------------------------------------";
			break;
			case 2:cout<<"Enter the number of Non teaching members:";
					cin>>m;
					cout<<"------------------------------------------------\n";
					for(int i=0;i<m;i++)
					{
						nt[i].get();
						}
							cout<<"Non teachers details are:";
		for(int i=0;i<n;i++)
		{
			nt[i].show();
			}
			cout<<"------------------------------------------------\n";
			break;	
			case 3:cout<<"Enter the number of Instructors:";
					cin>>l;
					cout<<"------------------------------------------------\n";
					for(int i=0;i<l;i++)
					{
						in[i].get();
						}
							cout<<"Instructors details are:";
		for(int i=0;i<l;i++)
		{
			in[i].show();
			}
			cout<<"\n------------------------------------------------";
			break;	
			case 4:flag=0;
			break;
				
	}
        
       }
	   cout<<"\n";   
       
        return 0;
}
