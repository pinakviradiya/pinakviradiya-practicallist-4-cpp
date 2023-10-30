#include<iostream>
using namespace std;
class sum
{
	private:
			int n1,n2;
			friend int add(sum s);
	public:
			void setdata(int a,int b)
			{
				n1=a;
				n2=b;
				
			}
			void display(void)
			{
				cout<<"Value of number 1 is :: "<<n1<<endl;
				cout<<"Value of number 2 is :: "<<n2<<endl;
			}
			
};
int add(sum s)
{
	cout<<"Addition of the given number is :: "<<s.n1+s.n2<<endl;
}
int main()
{
	sum s1;
	s1.setdata(99,999);
	s1.display();
	add(s1);
	return 0;
}

