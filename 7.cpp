#include<iostream>
using namespace std;
struct student 
{
    int x;
    char name[20];
};
void display(struct student &s1)
{
    cout<<"RollNo:"<<s1.x<<endl;
    cout<<"Name:"<<s1.name<<endl;
}
int main()
{
struct student s1;
cout<<"Enter the roll number of the student"<<endl;
cin>>s1.x;
cout<<"Enter the name of the student"<<endl;
cin>>s1.name;
display(s1);
return(0);
}