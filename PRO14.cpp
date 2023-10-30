#include <iostream>
using namespace std;
class MyClass
{
	public:
    	// Constructor
    	MyClass()
		{
        	cout << "Object created" << endl;
    	}

    	// Destructor
    	~MyClass()
		{
        	cout << "Object destroyed" << endl;
    	}
};

int main() 
{
    MyClass obj1,obj2;
    
    return 0;
}


