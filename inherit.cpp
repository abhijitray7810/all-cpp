#include<iostream>
using namespace std;
class Father{
    protected:
    string surname="abhijit";
};
class son1:Father{
    string name="avi";
    public:
    void show()
    {
        cout<<name<<" "<<surname<<endl;

    }
};
class son2:Father{
    string name="abhi";
    public:
    void disp()
    {
        cout<<name<<" "<<surname;

    }
};