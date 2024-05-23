#include<iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 1;
    cout<<"address:"<<p<<"\t";
    cout<<"value:"<<*p<<endl;
    delete p;
    cout<<"address:"<<p<<endl;
    p = nullptr;
    cout<<"address:"<<p<<endl;
    return(0);
}