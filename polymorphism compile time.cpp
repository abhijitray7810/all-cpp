#include<iostream>
using namespace std;
void showinfo(int age){
cout<<age<<endl;
}
void showinfo(string name)
{
cout<<name<<endl;
}
void showinfo(double salary){
cout<<salary<<endl;
}
int main()
{
    showinfo(23);
    showinfo("abhijiot");
    showinfo(232.3);

}
