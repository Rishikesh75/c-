#include<iostream>
using namespace std;

void display(int *p) {
    *p = 2; // Modifies the value pointed to by p
}

int main() {
    int *p = new int; // Dynamically allocating memory for an integer
    *p = 1; // Assigning a value to the allocated memory
    display(p); // Passing the pointer to the function
    cout << *p << endl; // Outputting the value pointed to by the pointer
    delete p; // Freeing the allocated memory
    return 0;
}
