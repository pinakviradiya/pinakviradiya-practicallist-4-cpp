#include<iostream>
using namespace std;
class student
{
	public:
			student()
			{
				cout<<"constructor invoked"<<endl;
			}
			~student()
			{
				cout<<"destructor invoked"<<endl;
			}
};
int main()
{
	student s1,s2;
	
	return 0;
}

