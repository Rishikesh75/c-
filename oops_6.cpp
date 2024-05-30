#include<iostream>
using namespace std;
class complex_number
{
private:
    /* data */
    int real;
    int complex;
public:
    void put_data(int r,int c)
    {
        real = r;
        complex = c;
    }
friend void display(complex_number);
};
void display(complex_number a)
{
    cout<<"Number:"<<a.real<<"+"<<a.complex<<"i"<<endl;
}



int main()
{
    complex_number a;
    a.put_data(2,3);
    display(a);

    return(0);
}