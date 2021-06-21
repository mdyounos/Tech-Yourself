#include<iostream>
using namespace std;
class myclass{
    int x;
public:
    myclass()
    {
        x = 0;
    }
    myclass(int n)
    {
        x = n;
    }
    int getx()
    {
        return x;
    }
};
int main()
{
    myclass *p = new myclass[10];
    myclass ob(10);

    if(!p)
    {
        cout<<"Allocation error\n";
        return 1;
    }
    for(int i=0; i<10;i++)
        p[i]=ob;
    for(int i=0; i<10; i++)
    {
        cout<<"p["<< i << "]:" << p[i].getx() <<endl;
    }
    return 0;
}
