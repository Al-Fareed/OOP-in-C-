#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:test(int i, int j):b(j),a(i+b)
	{
		cout<<"Constructor executed\n";
		cout<<"value of a:"<<a<<", b:"<<b<<", i:"<<i<<endl;
	}
};
int main()
{
	test t(2,9);
	return 0;
}
