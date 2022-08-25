#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int code;
	string name;
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
	cout<<"Program name:"<<name;
	return 0;
}
