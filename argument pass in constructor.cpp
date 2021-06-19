#include<iostream>
using namespace std;

class base{
public:
    base()
    {
        cout<<"constructing base class"<<endl;
    }
    ~base()
    {
        cout<<"destructing base class"<<endl;
    }
};
class derived: public base{
    int j;
public:
    derived(int n)
    {
        cout<<"constructing derived class"<<endl;
        j=n;
    }
    ~derived()
    {
        cout<<"destructing derived class"<<endl;
    }
    void showj()
    {
        cout<< j <<endl;
    }
};
int main()
{
    derived o(10);
    o.showj();
    return 0;
}
