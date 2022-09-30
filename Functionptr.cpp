#include<iostream>
usig namespace std;
int sum (int a, int b)
{
     return a+b;
}
int main()
{
   int (*funptr)(int,int);
   funptr=sum;
   int all = funptr(10,20);
   cout<<"All= "<<all<<endl;
}