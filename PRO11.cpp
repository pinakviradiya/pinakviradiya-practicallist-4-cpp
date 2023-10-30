#include<iostream>
using namespace std;
class student
{
	public:
			int roll_no;
			string name;
			student(int r,string n)
			{
				roll_no=r;
				name=n;
			}
			void display()
			{
				cout<<"Your rollno is :: "<<roll_no<<endl;
				cout<<"Your name is   :: "<<name<<endl;
			}
};
int main()
{
	student s1(131,"Vishakha");
	student s2=student(78,"Aadeel");
	s1.display();
	s2.display();
	return 0;
}

