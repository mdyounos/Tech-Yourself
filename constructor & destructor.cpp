#include<iostream>
using namespace std;

class base{
public:
    base()      //constructor declaration
    {
        cout<<"constructing base class\n";
    }
    ~base()     //destructor declaration
    {
        cout<<"destructing base class\n";
    }
};

class derived: public base{         //inherit base class as spublic
public:
    derived()      //constructor declaration
    {
        cout<<"constructing derived class\n";
    }
    ~derived()      //constructor declaration
    {
        cout<<"Destructing derived class\n";
    }
};
int main()
{
    derived ob;     //create constructor
    return 0;
}
