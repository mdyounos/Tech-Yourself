#include<iostream>
using namespace std;

class vehicle{
    int num_wheels;
    int range;
public:
    vehicle(int w, int r)
    {
        num_wheels=w;
        range=r;
    }
    void showv()
    {
        cout<< "wheels:" << num_wheels << endl;
        cout<< "range:" << range << endl;
    }
};

class car: public vehicle{
    int passengers;
public:
    car(int p,int w,int r): vehicle(w,r)        //parameter transfer to vehicle class
    {
        passengers = p;
    }
    void show()
    {
        cout<< "Passengers:" << passengers << endl;
    }
};

class truck: public vehicle{
int loadlimit;
public:
    truck(int l,int w,int r): vehicle(w,r)
    {
        loadlimit = l;
    }
    void show()
    {
        cout<< "Loadlimit:" << loadlimit << endl;
    }
};

int main()
{
    car c(5,4,500);
    truck t(30000,12,1200);
    cout<< "Car:" << endl;
    c.show();
    c.showv();
    cout<< endl << "Truck:" << endl;
    t.show();
    t.showv();
    return 0;
}
