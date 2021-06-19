#include<iostream>
using namespace std;

class samp{
int a;
protected:
    int b;
public:
    int c;
    samp(int n, int m)
    {
        a=n;
        b=m;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};

int main()
{
    samp ob(10,20);
    //ob.a=50;         Error! because a is private data member
    //ob.b=100;        Error! because b is protected data member
    ob.c=30;           //ok
    cout<< ob.geta() << ' ';
    cout<< ob.getb() << ' ' <<ob.c << '\n';
    return 0;
}
