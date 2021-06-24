#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5,1);
    int i;
    cout<< "Size= " << v.size() << endl;
    cout<< "Original contents: ";
    for(i=0; i<v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<< endl;
    ///inserting item
    vector<int> :: iterator p=v.begin();
    p+=2;
    v.insert(p,10,9);
    cout<< "contents after inserting: ";
    for(i=0; i<v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<< endl;
    //erase item
    p = v.begin();
    p+=2;
    v.erase(p,p+10);
    cout<< "contents after erase: ";
    for(i=0; i<v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<< endl;
    return 0;
}
