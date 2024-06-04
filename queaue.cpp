#include <iostream>
using namespace std;

struct node {
    int number;
    struct node *next;
};

struct node **create_queue() {
    struct node **q = new struct node *[2];
    q[0] = nullptr;
    q[1] = nullptr;
    return q;
}

struct node *create_node(int n) {
    struct node *temp = new node;
    temp->number = n;
    temp->next = nullptr;
    return temp;
}

struct node **insert_queue(struct node **q, int n) {
    struct node *temp = create_node(n);
    if (q[0] == nullptr && q[1] == nullptr) {
        q[0] = temp;
        q[1] = temp;
    } else {
        q[1]->next = temp;
        q[1] = temp;
    }
    return q;
}

void display(struct node **q) 
{
    struct node **temp = q;
    while (temp[0]!= nullptr) {
        cout << "Element is: " << temp[0]->number << endl;
        temp[0] = temp[0]->next;
    }
}
struct node **delete_queaue(struct node**q)
{
    if (q[0] == nullptr && q[1] == nullptr) {
        cout<<"queaue is empty"<<endl;
    }
    else if(q[0] == q[1])
    {
        q[0] = nullptr;
        q[1] = nullptr;
    }
    else
    {
        struct node *temp = q[0];
        q[0] = q[0]->next;
        free(temp);
    }
    return(q);
}
int main() {
    struct node **q_1 = create_queue();
    q_1 = insert_queue(q_1, 1);
    q_1 = insert_queue(q_1, 2);
    q_1 = insert_queue(q_1, 3);
    q_1 = delete_queaue(q_1);
    q_1 = delete_queaue(q_1);
    q_1 = delete_queaue(q_1);
    q_1 = delete_queaue(q_1);
    display(q_1);
    return 0;
}
