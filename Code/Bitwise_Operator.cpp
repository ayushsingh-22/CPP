#include <iostream>

using namespace std;
int main()
{
	int x,y,z,m,n,o,p;
	cout<<"Enter value of 'x' & 'y'\t";
	cin>>x>>y;
	
	z=x&y;
	m=x^y;
	n=x|y;
	o=x<<1;
	p=x>>2;
	
	cout<<z<<endl;
	cout<<o<<endl;
	cout<<p<<endl;
	cout<<n<<endl;
	
	return 0;
	
}