#include<iostream>
using namespace std;
class a
{
	
	int A=5;
	friend class b;
};
class b
{
	public:
			void dispaly(a &a1)
			{
				cout<<"Value of A is :: "<<a1.A;
			}
};
int main()
{
	a a1;
	b b1;
	b1.dispaly(a1);
	return 0;
}

