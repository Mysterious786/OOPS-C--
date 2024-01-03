//Polymorphism means having many form
//Ability of a message to be displayed in more than one form
//A man with a different characteristics example husband father and an employee.


//!!!!!!!!!!!!!!!!!!Types of Polymorphism!!!!!!!!!!!!!!!!!

 //P.1 Compile Time Polymorphism:

//    CT.1 Function Overloading

// Defination: When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.

//Code:  


// #include<iostream>
// using namespace std;
// class Learning{
// public:
// 	void func(int x){
// 		cout<<x<<endl;
// 	}
// 	void func(int x,char c){
// 		cout<<x<<" "<<c<<endl;
// 	}
// };

// int main(){
// 	Learning l;
// 	l.func(2);
// 	l.func(3,'h');
// 	return 0;
// }

//CT.2 Operator Overloading
//  1.Ability to provide the operators with special meaning for a data type
//  2.Whenever a plus operand is used beatween two opeartor of type int it performs an addition operation but when this is done with two strings it concatenated them.

#include<iostream>
using namespace std;
class Complex{
	int a,b;
public:
	Complex(int r=0,int h=0){
		a=r;
		b=h;
	}
	// This is automatically called
    // when '+' is used with between
    // two Complex objects
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.a = a + obj.a;
        res.b = b + obj.b;
        return res;
    }
    void print() { cout << a << " + i" << b << endl; }

};
int main(){
 Complex c1(10, 5), c2(2, 4);
 
    // An example call to "operator+"
    Complex c3 = c1 + c2;
    c3.print();

}


