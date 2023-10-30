#include<iostream>
using namespace std;
class temp
{
	public:
		int a,b;

		int add(temp t)
		{
			int x,y;

			x=t.a;
			y=t.b;

			return x+y;
		}

}t1,t2;
int main()
{
	t1.a=9;
	t1.b=10;

	cout<<"Sum of Two Number is :: "<<t2.add(t1)<<endl;

	return 0;
}
