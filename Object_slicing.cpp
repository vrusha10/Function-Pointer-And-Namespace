//What is Object Slicing
// When a Derived Class object is assigned to Base class. 
// The base class' contents in the derived object are copied to the base class leaving behind the derived class specific contents.
// This is referred as Object Slicing.


#include <iostream>
using namespace std;
class A {
    
    public:
    int a,b;
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
class B:public A {
    int c;
    public:
    B(int x,int y,int z):A(x,y)
    {
        c=z;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main()
{
    B b(1,2,3);
    A a(20,30);
    a=b;
    a.show();
    b.display();
}

