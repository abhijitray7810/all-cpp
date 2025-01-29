#include<iostream>
using namespace std;
int main()
{
    int num;
    for(num=1;num<=10;++num)
    {
        if(num==5){
            goto out;
        }
        cout<<num<<ends;
    }
    cout<<"hi fucker";
    out:
    cout<<"hello fucker";
}