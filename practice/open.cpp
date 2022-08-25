#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("test.txt");
char str[100];
if(!file)
{
	cout<<"Cant open";
	exit(0);
}
while(1)
{
	file>>str;
	if(file.eof())
	break;
	cout<<str;
}
file.close();
	
}
