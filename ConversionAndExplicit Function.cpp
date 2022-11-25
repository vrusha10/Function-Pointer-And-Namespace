
// What is Conversion Constructor?
// A conversion constructor is a single-parameter constructor that is declared without the function specifier explicitly.
// The compiler uses conversion constructors to convert objects from the type of the first parameter to the type of the conversion constructor’s class.


// Why used?
// 1.In return value of a function
// As a parameter to a function

#include <iostream>
using namespace std;
class MyClass 
{
	int a, b;
public:
  explicit	MyClass(int i, int y)
	{
		a = i;
		b = y;
	}
	void display()
	{
		cout << " a = " << a << " b = " << b << endl;
	}
};
int main()
{
	MyClass object(10, 20);
	object.display();
	// Multiple parameterized conversion constructor is invoked.
// 	int n1=3,n2=4;
 	object = { 30, 40 };      //explicit madhe he comment karaych
	object.display();
}
