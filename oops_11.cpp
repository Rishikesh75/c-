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
       complex_number operator +(complex_number x_1)
       {
            complex_number temp(0,0);
            temp.real = this->real + x_1.real;
            temp.imaginary = this->imaginary + x_1.imaginary;
            return temp;
       }
        void display()
        {
            cout<<real<<"+"<<imaginary<<"i";
        }
};

int main()
{

    complex_number x_1(1,2),x_2(2,3),x_3(0,0);
    x_3  = x_1 + x_2;
    x_3.display();
    return(0);
}