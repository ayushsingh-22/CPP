#include<iostream>
using namespace std;
int main()
{
	float a,c,b;
	cout<<"Enter 'a' & 'b'\n";
	cin>>a>>b;
	
	c= a/b;
	
	if (b==0)
	{
		cout<<"error or divide by 0"<<endl;
	}
	else
	{
		cout<<"Quotient is\t"<<c<<endl;
	}
	
	return 0;
}