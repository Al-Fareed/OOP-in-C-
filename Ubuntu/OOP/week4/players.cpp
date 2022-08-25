//Author Name:Al-Fareed
//Reg No.:210970049
//Date of Creation:24-Dec-21
//Name of Program:Program to store details of players
//----------------------------------------------------------------------------------
#include <iostream>
using namespace std;
class player
{
        public :char name[20];
                int match,total_run,notout,code,avg;
                player()
                {
                        match=0;
                }
                void getdata()
                {
                        cout<<"Enter player code:";
                        cin>>code;
                        cout<<"Enter player name:";
                        cin>>name;
                        cout<<"Enter matches played:";
                        cin>>match;
                        cout<<"Enter total runs:";
                        cin>>total_run;
                        cout<<"Enter number times not out:";
                        cin>>notout;
                }
                void avg_run()
                {
                        avg=total_run/match;
                }
                void display()
                {
                        cout<<"---------------------------------"<<endl;
                        cout<<"Player code     :  "<<"IND"<<code<<endl;
                        cout<<"Player name    :  "<<name<<endl;
                        cout<<" Number of matches played    :  "<<match<<endl;
                        cout<<"Total runs   :  "<<total_run<<endl;
						cout<<"Number of time not out   :  "<<notout<<endl;
                        cout<<"Average runs   :  "<<avg<<endl;
                }
                void sort_runs(player *p,int n)
                {
                        player temp;
                        for(int i=0;i<n;i++)
                        {
                                for(int j=0;j<n-i-1;j++)
                                {
                                        if(p[i].total_run>p[j+1].total_run)
                                        {
                                                temp=p[j];
                                                p[j]=p[j+1];
                                                p[j+1]=temp;
                                        }
                                }
                        }
                }
                void display(int code)
                {
                        cout<<"--------------------------------"<<endl;
                        cout<<"Player code   : "<<"IND"<<code<<endl;
                        cout<<"Player name   :  "<<name<<endl;
                        cout<<"Number of matches played    :  "<<match<<endl;
                        cout<<"Total runs   :  "<<total_run<<endl;
                        cout<<"Number of times not out    : "<<notout<<endl;
                        cout<<"Average Runs   :  "<<avg<<endl;
                }
};
int main()
{
        player p[10],p1;
        int n,records=0;
        int ch,code;
        do
        {
                cout<<"------------------------------------------"<<endl;
				cout<<"1. Enter details of players"<<endl;
				cout<<"2. Display average runs of a single player"<<endl;
				cout<<"3. Average runs of all players"<<endl;
				cout<<"4. Display the list of players in sorted order as per total runs"<<endl;
				cout<<"5.Exit\n";
				cout<<"Enter your choice:";
				cin>>ch;
				cout<<endl;
				switch(ch)
				{
					case 1:cout<<"Enter no of players"<<endl;
				        cin>>n;
				        for(int i=0;i<n;i++)
				        {
				 
				                p[i].getdata();
				                p[i].avg_run();
				                records++;
				        }
				        break;
				    case 2:cout<<"Enter player code"<<endl;
				               cin>>code;
				               if(records!=0)
				               {
					               for(int i=0;i<n;i++)
					               {
					                    if(p[i].code==code)
					                    {
					                        p[i].display(code);
					                    }
					               }
				           		}
				               else
				               {
				               	cout<<"No records available\n";
							   }
				                for(int i=0;i<n;i++)
				               {
				               		if(p[i].code!=code)
				                       {
				                            cout<<"Player not found";
				                       }
				           		}
				               break;
				    case 3:
							if(records!=0)
							{
								cout<<"Avereage runs all players are:\n";
								for(int i=0;i<n;i++)
				               {
				                      cout<<"IND"<<p[i].code<<" "<<p[i].avg<<endl;
				               }
							}
							else
							{
							   	cout<<"No Records Available\n";
							}
				            break;
				case 4:
						if(records!=0)
						{
							p1.sort_runs (p,n);
				            for(int i=0;i<n;i++)
				               {
				                       p[i].display();
				               }
						}
						else
				        {
				          	cout<<"No records Available\n";
						}
				        break;
				case 5:return 0;
				        default :cout<<"Invalid choice";
				}
		}while(ch!=0);
		return 0;
}
