#include <iostream>
#include <string>

using namespace std;

class CopyIt
{
    int rno;
    string name;
    double fee;

public:
    CopyIt(int, const char[], double);
    // Copy constructor takes a reference to an object of the same class as an argument.
    //  Sample(Sample &t)
    //  {
    //         id=t.id;
    //  }
    CopyIt(CopyIt &t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
    }
    void display();
};

CopyIt::CopyIt(int no, const char n[], double f)
{
    rno = no;
    name = n;
    fee = f;
}

void CopyIt::display()
{
    cout << rno << endl;
    cout << name << endl;
    cout << fee << endl;
}

int main()
{
    CopyIt c(1001, "Saqlain", 500000);
    c.display();
    CopyIt copy(c);
    copy.display();
    return 0;
}

// Why Copy Constructor are called

// When an object is constructed based on another object of the same class.
// return value optimization (sometimes referred to as RVO).

//!!!!!!!!!!!!WHEN SHOULD WE WRITE OUR OWN COPY CONSTRUCTOR!!!!!!!!!!!!!!!!

// When we have members that dynamically get initialized at run time, the default copy constructor copies this member with the address of dynamically allocated memory and not a real copy of this memory.
// Now, both the objects point to the same memory, and changes in one reflect in another object.
// Further, the main disastrous effect is, that when we delete one of these objects another object still points to the same memory, which will be a dangling pointer, and memory leak is also a possible problem with this approach.
// Another use case of a copy constructor is when we want to copy only specific data members of the class from one object to another object and keep the remaining data members identical for each object, we can write our own copy constructor.

// The default constructor does only shallow copy.