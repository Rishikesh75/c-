#include <iostream>
using namespace std;

class B;  // Forward declaration of class B

class A {
    private:
        int var_1;
    public:
        void put_data(int x) {
            var_1 = x;
        }
        friend class B;  // Declare class B as a friend
};

class B {
    public:
        void display(const A& a) {  // Pass an instance of class A
            cout << "The value in class A is: " << a.var_1 << endl;
        }
};

int main() {
    A a;
    B b;
    a.put_data(10);
    b.display(a);  // Pass the instance of A to the display method

    return 0;
}
