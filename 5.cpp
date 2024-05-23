#include<iostream>
using namespace std;
int display(int *x)
{
    cout<<*x<<endl;
    *x = 5; 
}
int main()
{
    int var = 1;
    int *x = &var;
    display(x);
    cout<<var;

    return(0);
}