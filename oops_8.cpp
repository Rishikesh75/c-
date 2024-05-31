#include <cstring>  // for memset and strncpy

class car
{
    private:
        int car_id;
        char name[20];
    public:
        // Default constructor
        car()
        {
            car_id = 0;
            memset(name, '\0', sizeof(name));
        }

        // Parameterized constructor
        car(int c, char n[])  // Removed const
        {
            car_id = c;
            strncpy(name, n, sizeof(name) - 1);
            name[sizeof(name) - 1] = '\0';  // Ensure null termination
        }

        // Copy constructor
        car(const car &c_1)
        {
            car_id = c_1.car_id;
            strncpy(name, c_1.name, sizeof(name) - 1);
            name[sizeof(name) - 1] = '\0';  // Ensure null termination
        }
};
