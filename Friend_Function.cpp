#include <iostream>
using namespace std;

class Marks
{
private:
	string password;

protected:
	string userName;

public:
	string name;
	Marks()
	{
		password = "134hsjs12";
		userName = "gojo_goku_kurama";
		name = "saqlain";
	}
	// It grants special access to private and protected members of a class

	friend class Defination;
	// Synatax for friend function
	//  friend void function_name(datatype of this functio class name& variable_name)
};

class Defination
{
public:
	void display(Marks &t)
	{
		cout << t.password << endl;
		cout << t.name << endl;
		cout << t.userName << endl;
	}
};

int main()
{
	Marks m;
	Defination d;
	d.display(m);
	return 0;
}

// C++ program to create a member function of another class
// as a friend function
#include <iostream>
using namespace std;

class base; // forward definition needed
// another class in which function is declared
class anotherClass
{
public:
	void memberFunction(base &obj);
};

// base class for which friend is declared
class base
{
private:
	int private_variable;

protected:
	int protected_variable;

public:
	base()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend function declaration
	friend void anotherClass::memberFunction(base &);
};

// friend function definition
void anotherClass::memberFunction(base &obj)
{
	cout << "Private Variable: " << obj.private_variable
		 << endl;
	cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
	base object1;
	anotherClass object2;
	object2.memberFunction(object1);

	return 0;
}
