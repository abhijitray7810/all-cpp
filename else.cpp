#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char value;
    cout<<"enter the value of first number:";
    cin>>num1;
    cout<<"what is do you  want:";
    cin>>value;
    cout<<"enter the value of second number:";
    cin>>num2;
    switch(value)
    {
case'+':cout<<"addition :"<<num1+num2;
break;
case'-':cout<<"substraction:"<<num1-num2;
break;
case'*':cout<<"multiplextion:"<<num1*num2;
break;
case'/':cout<<"divition:"<<num1/num2;
break;
    }
}