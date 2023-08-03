#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m1,m2,m3;
	float K;
	cout<<"enter your marks 'm1','m2', 'm3'"<<endl;
	cin>>m1>>m2>>m3;
	
	K=(m1+m2+m3)/3;
	
	if(K>=60)
	{
		cout<<"Your Grade='A'"<<endl;
	}
	else if(35<=K && K<60)
	{
		cout<<"Your Grade='B'"<<endl;
	}
	else
	{
		cout<<"Your Grade='C'"<<endl;
	}
	return 0;
}