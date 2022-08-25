//Author Name:Al-Fareed
//Reg No.:210970049
//Date of Creation:24-Dec-21
//Name of Program:Program to store bank details and perform operation on account
//----------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class Bank
{
	public:
	char name[20];
	int accno;
	char type;
	float bal, amt;
			Bank()
			{
				bal=500;
			}
			void read()
			{
				cout<<".Enter account no: ";
				cin>>accno;
				cout<<"  Enter customer name: ";
				cin>>name;
				cout<<"  Enter account type (S/C/F): ";
				cin>>type;
				
			}
			void deposit()
			{
				cout<<"\nEnter the amount to be deposited: ";
				cin>>amt;
				bal=bal+amt;
				cout<<"\nDeposited successfully";
			}
			void withdraw()
			{
				cout<<"\nEnter the amount to be withdrawn: ";
				cin>>amt;
				if((bal-amt)<500)
					cout<<"\nInsufficient balance";
				else
				{
					bal=bal-amt;
					cout<<"\nAmount withdrawen successfully";
				}
			}
			void display()
			{
				cout<<"\nAccount no: accno"<<accno;
				cout<<"\nName: "<<name;
				cout<<"\nAccount type: "<<type;
				cout<<"\nBalance: "<<bal;
				
			}
	};
	
	int main()
	{
		int i,ano;
		Bank b[2];
		int ch,k=1;
		char choice;
		cout<<"Enter the Account details";
		cout<<"\n-----------------------------\n";
		for(i=0;i<2;i++)
		{
				cout<<k;
				b[i].read();
				cout<<"\n";
				k++;
			
			}
	
					if(b[0].accno==b[1].accno)
			{
				cout<<"Same account number are not allowed\n Enter Different account number";
				return 0;
			}
			
			
		do
		{
			cout<<"\nOptions\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit";
			cout<<"\nEnter your choice: ";
			cin>>ch;
			switch(ch)
			{
				case 1: cout<<"\nEnter account no: ";
						cin>>ano;
						for(i=0;i<2;i++)
						{
							if(b[i].accno==ano)
							{
									b[i].deposit();
									break;
							}
						}
							if(b[i].accno!=ano)
							{
								
									cout<<"Account not found";
							}
						break;
								
				case 2: cout<<"\nEnter account no: ";
						cin>>ano;
						for(i=0;i<2;i++)
						{
							if(b[i].accno==ano)
							{
									b[i].withdraw();
									break;
							}
							
						}
							if(b[i].accno!=ano)
							{
								
									cout<<"Account not found";
							}
						break;
				case 3: cout<<"\nEnter account no: ";
						cin>>ano;
						for(i=0;i<2;i++)
						{
							if(b[i].accno==ano)
							{
								
									b[i].display();
									break;
							}
						
						}
						if(b[i].accno!=ano)
							{
								
									cout<<"Account not found";
							}
						
						
						
						break;
				case 4:return 0;
				default:cout<<"Invalid choice";
						
			}
			cout<<"\nDo you want to continue(y/n): ";
			cin>>choice;
			
			
		}while(choice=='Y' || choice=='y');
	}
			
