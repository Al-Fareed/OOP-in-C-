#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile("test.txt",ios::app);
	if(!myfile)
	{
		cout<<"Cannot open";
		return 1;
	}
	myfile<<"\nmca";
	myfile.close();
}
