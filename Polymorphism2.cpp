// Runtime Polymorphism

//This type of polymorphism is achieved by Function Overriding.
//Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
//Runtime Polymorphism cannot be achieved by data members in C++

//Code:

#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void eat(){    
cout<<"Eating...";    
    }      
};   
class Dog: public Animal    
{    
 public:  
 void eat()    
    {    
       cout<<"Eating bread...";    
    }    
};  
int main(void) {  
   Dog d = Dog() ;    
   d.eat();  
   return 0;  
}  