#include<iostream>
using namespace std;
class complex_number
{
    private:
        int real;
        int imaginary;
    public:
        complex_number(int real,int imaginary)
        {
            this->real =  real;
            this->imaginary = imaginary;
        }
        void operator ++()
        {
            this->real = this->real + 1;
            this->imaginary = this->imaginary + 1;
        }
        void display()
        {
            cout<<real<<"+"<<imaginary<<"i";
        }
};
int main()
{
    complex_number s_1(1,2);
    (++s_1);
    s_1.display();
    return(0);
}