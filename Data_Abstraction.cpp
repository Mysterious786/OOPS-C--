//Data Abstraction is a process of providing only the essential details to the outside world and hiding the internal details, i.e., representing only the essential details in the program.
//Let's take a real life example of AC, which can be turned ON or OFF, change the temperature, change the mode, and other external components such as fan, swing. But, we don't know the internal details of the AC, i.e., how it works internally. Thus, we can say that AC seperates the implementation details from the external interface.
//C++ provides a great level of abstraction. For example, pow() function is used to calculate the power of a number without knowing the algorithm the function follows.

//Ways to achieve Abstraction

// Abstraction using classes
// Abstraction in header files.

// Access Specifiers Implement Abstraction:

// Public specifier: When the members are declared as public, members can be accessed anywhere from the program.
// Private specifier: When the members are declared as private, members can only be accessed only by the member functions of the class.

#include <iostream>    
using namespace std;    
 class Sum    
{    
private: int x, y, z; // private variables  
public:    
void add()    
{    
cout<<"Enter two numbers: ";    
cin>>x>>y;    
z= x+y;    
cout<<"Sum of two number is: "<<z<<endl;    
}    
};    
int main()    
{    
Sum sm;    
sm.add();    
return 0;    
} 


//Advantage:

    // Implementation details of the class are protected from the inadvertent user level errors.
   //The main aim of the data abstraction is to reuse the code and the proper partitioning of the code across the classes.
