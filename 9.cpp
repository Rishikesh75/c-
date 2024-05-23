#include<iostream>
using namespace std;
union course
{
    int id;
    int id_1;
};
int main()
{

    course c_1;
    c_1.id = 1;
    cout<<c_1.id<<endl;
    c_1.id_1 = 2;
    cout<<c_1.id_1<<endl;
    return(0);
}