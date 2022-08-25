#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream myfile;
	char msg[75];
	myfile.open("test.txt",ios::app);
	if(!myfile)
	{
		cout<<"\n Cannot open this file:";
		return 1;
	 } 
	 cout<<"Enter a message :";
	 cin.getline(msg,75);
	 myfile<<msg<<"\n";
	 myfile.close();
}
