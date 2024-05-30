#include<iostream>
using namespace std;
class rectangle
{
private:
   int leangth;
   int breadth;
public:
   int get_data_leangth();
   int get_data_width();
    void put_data(int l,int b);
    int area();
    
};
int rectangle::get_data_leangth()
{
    return(leangth);
}
int rectangle::get_data_width()
{
    return(breadth);
}
void rectangle::put_data(int l,int b)
{
    leangth = l;
    breadth = b;
}
int rectangle::area()
{
    return(leangth*breadth);
}
int main()
{
    rectangle r_1;
    r_1.put_data(2,3);
    int a = r_1.area();
    cout<<"area of the reactangle:"<<a<<endl;
    return(0);
}