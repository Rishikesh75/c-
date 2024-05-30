#include <iostream>
#include <cstring>
using namespace std;

class student {
private:
    int Roll_number;
    char name[20];
public:
    student(int r, const char n[], int len) {
        Roll_number = r;
        memcpy(name, n, len);
        name[len] = '\0';  // Ensure the string is null-terminated
    }
    
    void display_details();
};
void student::display_details()//Outline declaration
    {
        cout << "Name: " << name << endl;
        cout << "Roll_number: " << Roll_number << endl;
    }
int main() {
    char name[20];
    strcpy(name, "Rishi");
    
    student s1(1, name, strlen(name));
    s1.display_details();
    return 0;
}
