#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age\t"<<endl;
	cin>>age;
	
	if(age>=18&& age<=40)
	{
		cout<<"Your are eligible"<<endl;
	}
	
	else
	{
		cout<<"SORRy ATTEMPT NEXT YEAR"<<endl;
	}
	
	return 0;
}