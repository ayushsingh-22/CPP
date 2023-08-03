#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c,d, r1, r2;
	cout <<"enter'a' , 'b' ,'c' "<<endl;
	cin>>a>>b>>c;
	
	d=((b*b)-(4*a*c));
	r1 =((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
	r2 =((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
	
	if(d==0)
	{
		cout<<"Equal& Reel Root\t"<<d<<endl;
		cout<<"Root="<<r1<<endl;
	}
	else if (d>0)
	{
		cout<<"Unequal & Real Root\t"<<d<<endl;
		cout<<"Root="<<r1<<"\t"<<r2<<endl;
	}
	else
	{
		cout<<"Imagaginary Root\t"<<d<<endl;
		cout<<"Root="<<r1<<"\t"<<r2<<endl;
	}
	return 0;
}