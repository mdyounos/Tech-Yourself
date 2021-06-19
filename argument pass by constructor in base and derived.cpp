#include<iostream>
using namespace std;

class base{
    int i;
public:
    base(int n)         //constructor declaration
    {
        cout<<"Constructing base class"<<endl;
        i=n;
    }
    ~base()             //destructor declaration
    {
        cout<<"destructing base class"<<endl;
    }
    void showi()
    {
        cout<< i <<endl;
    }
};

class derived: public base{
    int j;
public:
    derived(int n): base(n)     //argument pass too base class's constructor
    {
        cout<<"Constructing derived class"<<endl;
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
    o.showi();
    o.showj();
    return 0;
}
