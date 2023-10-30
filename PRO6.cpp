#include <iostream>
using namespace std;
class Product
{
	public:
    	string name;
    	int m_Y;
    	int e_Y;

    	Product(string n,int manufYear,int expiryear)
		{
			name=n;
			m_Y=manufYear;
			e_Y=expiryear;
		}
    	int c_Y()
		{
        	return e_Y - m_Y;
    	}
};
void print_year(Product p)
{
    cout<<"Product Name is :: "<<p.name<<endl;
    cout<<"Year of Life is :: "<<p.c_Y()<<endl;
}

int main() 
{
    Product p1("Medicine Welnec-P", 2021, 2024);

    print_year(p1);

    return 0;
}


