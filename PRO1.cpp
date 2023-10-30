#include<iostream>
#include<string>
using namespace std;
class employee
{
	private:
		string name,branch;
		int code,salary;
	public:
		void get_employee()
		{
			cout<<"Enter Employee Name   :: ";
			cin>>name;

			cout<<"Enter Employee Branch :: ";
			cin>>branch;

			cout<<"Enter Employee Code   :: ";
			cin>>code;

			cout<<"Enter Employee Salary :: ";
			cin>>salary;
		}

		void display_employee()
		{
			cout<<"Employee Name is   :: "<<name<<endl;

			cout<<"Employee Branch is :: "<<branch<<endl;

			cout<<"Employee Code is   :: "<<code<<endl;

			cout<<"Employee Salary is :: "<<salary<<endl;

		}
}e[3];
int main()
{
	int i;

	for(i=0;i<3;i++)
	{
		e[i].get_employee();
	}

	for(i=0;i<3;i++)
	{
		e[i].display_employee();
	}

	return 0;

}
