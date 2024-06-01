#include<iostream>
using namespace std;

class complex_number {
    private:
        int real;
        int imaginary;

    public:
        // Constructor with parameters
        complex_number(int real = 0, int imaginary = 0) {
            this->real = real;
            this->imaginary = imaginary;
        }

        // Overloaded + operator
        complex_number operator +(complex_number x_1) {
            complex_number temp;
            temp.real = this->real + x_1.real;
            temp.imaginary = this->imaginary + x_1.imaginary;
            return temp;
        }

        // Friend function for overloaded << operator
        friend ostream& operator <<(ostream& out, const complex_number& d_1);

        // Display function (optional)
        void display() {
            cout << real << "+" << imaginary << "i";
        }
};

// Definition of the << operator
ostream& operator <<(ostream& out, const complex_number& d_1) {
    out << d_1.real << "+" << d_1.imaginary << "i";
    return out;
}

int main() {
    // Create complex_number objects
    complex_number c1(3, 4);
    complex_number c2(1, 2);

    // Add two complex numbers
    complex_number c3 = c1 + c2;

    // Display the result using the << operator
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c1 + c2 = c3: " << c3 << endl;

    return 0;
}
