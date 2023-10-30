#include<iostream>
using namespace std;
class Add
{
	private:
			int n1,n2;
			friend void display(Add a);
	public:
			void getdata()
			{
				cout<<"Enter the value of Number 1 is :: ";
				cin>>n1;
				cout<<"Enter the value of Number 2 is :: ";
				cin>>n2;
			}

};
void display(Add a)
{
	cout<<"Addition is :: "<<a.n1+a.n2<<endl;
}
int main()
{
	Add a1;
	
	a1.getdata();
	display(a1);
	
	return 0;
}

