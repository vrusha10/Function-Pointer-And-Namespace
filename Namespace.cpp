#include<iostream>
using namespace std;
namespace First
{
   void fun1()
   {
       cout<<"First fun1"<<endl;
    }
}

namespace Second
{
   void fun2()
   {
      cout<<"Second Fun2"<<endl;
   }
}

int main()
{
  First::fun1();
  Second::fun2();
}