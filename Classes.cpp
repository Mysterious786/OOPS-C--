// 1. It is basicaaly a user defined data type
// 2. It holds its own data members and members functions.
// 3. It can be accesed by creating an Instance of a class.
// 4. Example: Class of Cars
// 5. There are two kinds of functions used
//  5.1 Inside class Defination
//  5.2 Outside class Defination
#include <iostream>
using namespace std;
class Person
{
	char name[26];
	int id;

public:
	string s;
	// Inside Class Defination
	void getDetails()
	{
		cout << "MY NAME IS " << s << endl;
		cout << "Hello I am in a class" << endl;
	}
	// Outside class Defination
	// It is not defined inside the class
	// Helps in achieving Encapsulation
	// Maintains and keep the code organized
	// Reduce Compilation Dependencies
	// If a source file A includes a header file B, and file B has been modified, source file A needs to be recompiled to reflect the changes in B.
	// Similarly, if a source file C includes source file A, and A has changed, both A and C need to be recompiled.
	void printName();
};
void Person::printName()
{
	cout << "Saquib" << endl;
}
int main()
{
	Person p1;

	// p1 is an entity also also as object
	// It helps to access data members and member functions of a particular class.
	p1.s = "SAQLAIN";
	p1.getDetails();
	p1.printName();

	return 0;
}

// When a program is executed the objects interact by sending messages to one another.

// All member functions defined inside a class are not default inline but we can make any non class
// Function inline by using the keyword inline with them
