#include<iostream>
using namespace std;
class interchange
{
private:
    /* data */
    int x;
    int y;
public:
    //member functions
    int  getdata_x()
    {
        return(x);
    }
    int getdata_y()
    {
        return(y);
    }
    void put_data(int q1,int q2)
    {
        x = q1;
        y = q2;
    }
    void swap()
    {
        int var;
        var = x;
        x = y;
        y = var;
    }
    
};
void display(interchange x1)
{
    cout<<"values:\n";
    int var_x = x1.getdata_x();
    int var_y = x1.getdata_y();
    cout<<"x:"<<var_x<<endl;
    cout<<"y:"<<var_y<<endl;
}
int main()
{
    interchange x1;
    x1.put_data(1,2);
    display(x1);
    x1.swap();
    display(x1);


    return(0);
}