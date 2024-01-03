//!!!!!!!!!!!!!!!!!!!!!!!!POINTS TO BE NOTED!!!!!!!!!!!!!!!!!!!!!!!!!

// 1. It is a special method that is invoked automatically at the time of object creation.
// 2. It is used to initialize the data members
// 3. Its name is same as that of class name
// 4. It does not have a return type

// Basically there are two types of defination

// DEF.1 Within the class

#include <iostream>
#include <string> // Include this header for using 'string'
using namespace std;

class Cons
{
	int pass;
	int marks;
	string name;

public:
	Cons()
	{
		pass = 40;
		marks = 98;
		name = "Saqlain";
	}

	void display()
	{
		cout << pass << endl;
		cout << marks << endl;
		cout << name << endl;
	}
};

int main()
{
	Cons c1;
	c1.display();
	return 0;
}

// DEF.2 Outside the class
// defining the constructor outside the class

#include <iostream>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;

public:
	student();
	void display();
};

student::student()
{
	cout << "Enter the RollNo:";
	cin >> rno;
	cout << "Enter the Name:";
	cin >> name;
	cout << "Enter the Fee:";
	cin >> fee;
}

void student::display()
{
	cout << endl
		 << rno << "\t" << name << "\t" << fee;
}

int main()
{
	student s;
	s.display();
	return 0;
}
