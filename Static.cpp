// Static members are only declared in a class declaration, not defined. They must be explicitly defined outside the class using the scope resolution operator.
//  C++ Program to demonstrate
//  static members can be accessed
//  without any object
//  Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
//  It is initialized before any object of this class is created, even before the main starts.
//  It is visible only within the class, but its lifetime is the entire program.
#include <iostream>
using namespace std;

class A
{
	int x;

public:
	A()
	{
		cout << "A's constructor called " << endl;
	}
};

class B
{
	static A a;

public:
	B()
	{
		cout << "B's constructor called " << endl;
	}
	static A getA()
	{
		return a;
	}
};

// Definition of a
A B::a;

// Driver code
int main()
{
	// static member 'a' is accessed
	// without any object of B
	A a = B::getA();

	return 0;
}
