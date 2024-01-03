#include <iostream>
using namespace std;

// this is a keyword
// It is a local object pointer in every instance member function containing address of the caller object
// this cannot be modified
// It is used to refer caller object in member function
// Scope resolution operator is for accessing static or class members and this pointer is for accessing object members when there is a local variable with the same name.

class Test
{
private:
    int x;

public:
    Test(int x = 0) { this->x = x; }
    void change(Test *t) { this->x = t->x; } // Corrected line
    void print() { cout << "x = " << x << endl; }
};

int main()
{
    Test obj(5);
    Test *ptr = new Test(10);
    obj.change(ptr);
    obj.print();
    delete ptr; // Remember to free the memory allocated with new
    return 0;
}
