#include <iostream>
using namespace std;
int main()
{
	float salary;
	float allowance;
	float deduction;
	float netsalary;
	cout<<"Enter your basic salary\n";
	cin>> salary;
	cout<< "Enter your % allowance\n";
	cin>> allowance;
	cout<<"Enter your % deduction\n";
	cin>> deduction;
	
	allowance = (allowance/100)*(salary);
	deduction= (deduction/100)*(salary);
	
	
	netsalary=(salary+allowance)-(deduction);
	
	cout<<netsalary<<endl;
	
}