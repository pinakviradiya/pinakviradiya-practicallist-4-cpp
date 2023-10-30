#include<iostream>
using namespace std;
class student
{
	private:
		float spi;
		char name[20];

	public:
		void getdata()
		{
			cout<<"Enter Student Name :: ";
			cin>>name;

			cout<<"Enter Student SPI  :: ";
			cin>>spi;

		}
		float sp()
		{
			return spi;
		}
		void putdata()
		{
			cout<<"Highest SPI Rank name is :: "<<name<<endl;
		}

}s[10];

int main()
{
	int i=0;

	for(i=0;i<10;i++)
	{
		s[i].getdata();
	}

	int high=0;
	for(i=1;i<10;i++)
	{
		if(s[i].sp()>s[high].sp())
		{
			high=i;
		}
	}
	cout<<"Highest SPI is :: "<<s[high].sp()<<endl;
	s[high].putdata();
	
	return 0;

}
