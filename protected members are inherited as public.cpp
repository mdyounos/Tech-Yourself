#include<iostream>
using namespace std;

class base{
protected:
    int a,b;
public:
    void setab(int n,int m)
    {
        a = n;
        b = m;
    }
};

class derived: public base{
int c;
public:
    void setc(int n)
    {
        c = n;
    }
    void showabc()
    {
        cout<< a <<' '<< b << ' ' << c <<endl;
    }
};
int main()
{
    derived ob;
    ob.setab(25,45);
    ob.setc(87);
    ob.showabc();
    return 0;
}
