#include<vector>
#include<iostream>
#include<list>
using namespace std;
int main()
{
	vector<int> v;
	list<int> l;
	
	for(int i=0;i<9;i++){
		v.push_back(i);
	}
	cout<<"Capacity of the vector is:"<<v.capacity()<<endl;
	int n=v.size();
	cout<<"Element at the back is:"<<v.back()<<endl;
	cout<<"Size of the vector is:"<<n<<endl;
	for(int i=1;i<n;i++){
		cout<<v.back()<<" ";
		v.pop_back();
	}
	cout<<"Reversing it\n";
	cout<<"\n-----------------list------------------\n";
	for(int i=0;i<10;i++){
		l.push_back(i);
	}
	int size=l.size();
	cout<<"The Size of the list is:"<<size<<endl;
	for(int i=0;i<size;i++){
		cout<<l.front()<<" ";
		l.pop_front();
	}
}
