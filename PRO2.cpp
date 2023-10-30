#include<iostream>
using namespace std;
class temp
{
	private:
		static int a,b;

	public:
		static void add()
		{
			cout<<"Sum of Two Number is :: "<<a+b<<endl;
		}
}t1;
int temp :: a=9;
int temp :: b=99;
int main()
{
	temp :: add();

	return 0;
}
