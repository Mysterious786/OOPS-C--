#include <iostream>
#include <string.h>
using namespace std;
class Des
{
public:
	Des()
	{
		cout << "Called" << endl;
	}
	// Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.
	// Destructor has the same name as their class name preceded by a tilde (~) symbol.
	// Destructor neither requires any argument nor returns any value.
	// It is automatically called when an object goes out of scope.

	// ~Des(){
	// 	cout<<"Deleted"<<endl;
	// }
	// Destructors with the access modifier as private are known as Private Destructors. Whenever we want to prevent the destruction of an object, we can make the destructor private.
private:
	~Des()
	{
		cout << "Deleted" << endl;
	}
};
int main()
{
	// In destructor, objects are destroyed in the reverse of an object creation
	// Dynamically allocation is working
	Des *t = new Des; // d1,d2,d3,d4;
	return 0;
	// The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory.
}