#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string myaddress="sougata joyita";
    cout<<"original value:"<<myaddress<<endl;
    myaddress.push_back('a');
    cout<<"modified value:"<<myaddress<<endl;
    myaddress.pop_back();
    cout<<"pop value:"<<myaddress<<endl;
}