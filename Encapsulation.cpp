// Wrapping up of data and information in a single unit
//  Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. Now,

// The finance section handles all the financial transactions and keeps records of all the data related to finance.
// Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
// Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.

// In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data.
// This is what Encapsulation is. Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”.

// Properties:

// Data Protection
// Information hiding

// Features:

// We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class.
// The function which we are making inside the class must use only member variables, only then it is called encapsulation.
// If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
// Encapsulation improves readability, maintainability, and security by grouping data and methods together.
// It helps to control the modification of our data members.
// It leads to data abstraction
// In C++, encapsulation can be implemented using classes and access modifiers.

//!!!!!!!!!!!!!!!!!!!!!!!!!!Example!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <iostream>
using namespace std;
class Encapsulation
{
private:
	// Data hidden from outside world
	int x;

public:
	// Function to set the value of x;
	void set(int a) { x = a; }
	int get()
	{
		return x;
	}
};
int main()
{
	Encapsulation obj;
	obj.set(5);
	cout << obj.get() << endl;
	return 0;
}
// In the above program, the variable x is made private. This variable can be accessed and manipulated only using the functions get() and set() which are present inside the class. Thus we can say that here, the variable x and the functions get() and set() are bound together which is nothing but encapsulation.

//!!!!!!!!!!!!!!!!!!!!!!!Role of Access Specifier!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// Private: Private access specifier means that the member function or data member can only be accessed by other member functions of the same class.
// Protected: A protected access specifier means that the member function or data member can be accessed by other member functions of the same class or by derived classes.
// Public: Public access specifier means that the member function or data member can be accessed by any code.