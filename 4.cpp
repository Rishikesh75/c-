#include<iostream>
using namespace std;
int display(int &x)
{
    cout<<x<<"\n";
    x = 2;
}
int main()
{

    int x= 1;
    display(x);
    cout<<x;
    return(0);
}