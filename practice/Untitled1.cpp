#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        char ch1,ch2;
        int j1,j2;
        double d1,d2;
        string str1,str2;
        char filename[]="test.txt";
        ch1='A';j1=12;d1=15.5;str1="Hello";
        ofstream op_file(filename,ios::out);
        op_file<<ch1<<' '<<j1<<' '<<d1<<' '<<str1;
        op_file.close();
        ifstream ip_file(filename,ios::in);
        while(!ip_file.eof())
        {
                ip_file>>ch2>>j2>>d2>>str2;
                cout<<ch2<<"\t"<<j2<<" "<<d2<<" "<<str2<<endl;
        }
}
