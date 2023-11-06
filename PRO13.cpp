#include<iostream>
using namespace std;
class student
{
	public:
			student()
			{
				cout<< "Viradiya pinak";
    			        cout<< "220130318014";
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

