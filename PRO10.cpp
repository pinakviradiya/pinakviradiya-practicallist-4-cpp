#include<iostream>
using namespace std;
class information
{
	public:
			int age,bdate;
			student()
			{
	
				age=17;
				bdate=217;
				
			}
};
int main()
{
	information i;
	
	cout<<"Age of given Information is :: "<<i.age<<" Years"<<endl;
	
	cout<<"Birth-date of given Information is :: "<<i.bdate<<endl;
	
	return 0;
	
}
