#include <iostream>
using namespace std;
class Person 
{
	private:
    	string name;
    	int age;

	public:
        	Person(string n,int a)
    	{
    		name=n;
    		age=a;
		}
    	
    	Person(Person &ab)
    	{
    		name=ab.name;
    		age=ab.age;
    		cout << "Copy constructor called" << endl;
		}
   
        	void display()
		{
        	cout << "Name: " << name << endl;
        	cout << "Age: " << age << endl;
    	}
};

int main() 
{
    Person person1("Alice", 25);

    Person person2(person1);

    cout << "Person 1 Information:" << endl;
    person1.display();

    cout << "\nPerson 2 Information (Copy of Person 1):" << endl;
    person2.display();

    return 0;
}


