#include<iostream>
using namespace std;
class a
{
    public:
    virtual void disp()
    {
        cout<<"i am a";
    }
};
class b :public a{
public:
void disp()
{
    cout<<"i am b";
}
};
int main()
{
    a*ptr;b obj;
    ptr=&obj;
    ptr->disp();
}
