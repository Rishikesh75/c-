#include<iostream>
using namespace std;
class product
{
private:
    int pid;
    static int count;
public:
   
    product(int pi)
    {
        pid = pi;
        count = count  + 1;
    }
    void display()
    {
        cout<<"Total no of objects:\n"<<count<<endl;
    }
};
int product::count = 0;
int main()
{
    product p1(1),p2(2),p3(3);
    p1.display();

    return(0);
}