#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a Number:";
	cin>>a;
	b=a%2;
	if(b==0)
	{
		cout<<"It is even number";
	}
	else
	{
		cout<<"It is odd number";
	}
	return 0;
}
