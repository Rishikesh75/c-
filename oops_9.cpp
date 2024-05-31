#include <cstring>  // for memset and strncpy
#include <iostream>
using namespace std;

class car {
    private:
        int car_id;
        char name[20];

    public:
        // Default constructor
        car() {
            car_id = 0;
            memset(name, '\0', sizeof(name));
            cout << "Default constructor called" << endl;
        }

        // Parameterized constructor
        car(int c, char n[]) {
            car_id = c;
            strncpy(name, n, sizeof(name) - 1);
            name[sizeof(name) - 1] = '\0';  // Ensure null termination
            cout << "Parameterized constructor called" << endl;
        }

        // Copy constructor
        car(const car &c_1) {
            car_id = c_1.car_id;
            strncpy(name, c_1.name, sizeof(name) - 1);
            name[sizeof(name) - 1] = '\0';  // Ensure null termination
            cout << "Copy constructor called" << endl;
        }

        ~car() {
            cout << "Destructor is called" << endl;
        }

        // Method to display car details
        void display() const {
            cout << "Car ID: " << car_id << ", Name: " << name << endl;
        }
};

int main() 
{
    cout << "Creating car1 using default constructor" << endl;
    car car1;
    car1.display();

    cout << "Creating car2 using parameterized constructor" << endl;
    char name[] = "Toyota";
    car car2(2, name);
    car2.display();

    cout << "Creating car3 using copy constructor" << endl;
    return(0);
}