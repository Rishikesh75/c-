#include<iostream>
using namespace std;
struct node
{
    int number;
    struct node *next;
};
struct node* create_stack(struct node *top)
{
    top = nullptr;
    return(top);
}
struct node * create_stack(int number)
{
    struct node *temp = new node;
    temp->number = number;
    temp->next = nullptr;
    return(temp);
}
struct node* push_stack(struct node *top,int n)
{
    struct node *temp = create_stack(n);
    temp->next = top;
    top = temp;
    return(top);
}
bool isempty(struct node *top)
{
    if(top == nullptr)
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
struct node* pop_stack(struct node * top)
{
    if(isempty(top) == true)
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        struct node *temp = top;
        top = top ->next;
        free(temp);
    }
    return(top);
}
void display(struct node *top)
{
    if(top == nullptr)
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        struct node *temp = top;
        while(temp != nullptr)
        {
            cout<<"element is:"<<temp->number<<endl;
            temp = temp->next;
        }
    }
}
int main()
{

    struct node * top;
    top = create_stack(top);
    top = push_stack(top,1);
    top = push_stack(top,2);
    top = push_stack(top,3);
    top = push_stack(top,4);
    display(top);
    top = pop_stack(top);
    display(top);
    return(0);
}