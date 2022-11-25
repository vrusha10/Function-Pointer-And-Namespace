
#include <iostream>
using namespace std;
void * operator new(size_t size)
{
    cout<<"New  operator overloading "<<endl;
    void *q=malloc(size);
}
void operator delete(void *q)
{
    cout<<"Delete operator overloading "<<endl;
    free(q);
}

class Test
{
    int x;
public: 
    Test()
    {
        x=0;
    }
    void * operator new(size_t size)
    {
        cout<<"New operator overloading Test= "<<size<<endl;
        void *p=malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout<<"Delete operator overloading Test "<<endl;
        free(p);
    }
};
int main()
{
  Test *t=new Test();
  delete t;
  int *m=new int;
  delete m;
}