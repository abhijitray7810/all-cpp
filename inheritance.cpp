#include<iostream>
using namespace std;
class Father
{
    protected:
    string surname="ray";
};
class son1:Father{
    string name="abhijit";
    public:
    void show()
    {
        cout<<name<<" "<<surname<<endl;
    }
};
class son2:Father{
    string name="avijit";
    public:
    void disp()
    {
        cout<<name<<" "<<surname<<endl;
    }
};
int main()
{
    son1 s1;
    s1.show();
    son2 s2;
    s2.disp();
}

