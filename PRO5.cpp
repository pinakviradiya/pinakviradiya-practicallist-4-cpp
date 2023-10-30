#include <iostream>
using namespace std;
class student 
{
	public:
    	string name;
    	int mark;
    	
    	void getdata()
    	{
    		cout<<"Enter name of Student :: ";
    		cin>>name;
    		
    		cout<<"Enter Mark of Student :: ";
    		cin>>mark;
		}

    	student(string n,int m)
    	{
    		name=n;
    		mark=m;
		}

    	void display() 
		{
        	cout << "Name of given Student is :: " <<name<< endl;
        	cout << "Mark of given Student is :: " <<mark<< endl;
    	}
};
student cstudent(string name, int mark) 
{
    student s(name,mark);
    return s;
}

int main() 
{
    student s1 = cstudent("Vishakha",99);
    
    cout << "Student information is...."<<endl;
    s1.display();

    return 0;
}


