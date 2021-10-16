#include<iostream>
using namespace std;

class base{
public:
    int i;
};
class derived1: virtual public base{
public:
    int j;
};
class derived2: virtual public base{
public:
    int k;
};
class derived3: public derived1,public derived2{
public:
    int product()
    {
        return i*j*k;
    }
};
int main()
{
    derived3 ob;
    ob.i=10;                                     //derived3=>derived1=>base
    ob.j=20;                                    //derived3=>derived1
    ob.k=5;                                     //derived3=>derived2
    cout<<"Product is: "<<ob.product()<<endl;   //derived3
    return 0;
}
