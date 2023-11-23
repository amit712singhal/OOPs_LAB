#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    // First constructor with no arguments
    Complex()
    {
        real = 0;
        img = 0;
    }

    // Second constructor with one argument (for initializing both real & img parts to equal values)
    Complex(float value)
    {
        real = value;
        img = value;
    }

    // Third constructor with two arguments (for initializing real & img parts to different values)
    Complex(float real, float img)
    {
        this->real = real;
        this->img = img;
    }

    // Function to add two complex numbers
    Complex add(Complex num)
    {
        Complex temp;
        temp.real = real + num.real;
        temp.img = img + num.img;
        return temp;
    }

    // Function to display the complex number
    void display()
    {
        cout << "(" << real << " + "
             << "i" << img << ")";
    }
};

int main()
{
    // Creating objects using different constructors
    Complex num1;
    Complex num2(9);
    Complex num3(15, 34);

    Complex sum = num1.add(num2);
    sum = sum.add(num3);

    cout << endl
         << "Sum of ";
    num1.display();
    cout << ", ";
    num2.display();
    cout << " & ";
    num3.display();
    cout << " = ";
    sum.display();
    cout << endl;

    return 0;
}
