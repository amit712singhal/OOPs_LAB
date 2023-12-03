#include <iostream>

// Class template for finding the greater of two numbers
template <typename T>
class GreaterFinder {
private:
    T num1, num2;

public:
    // Constructor
    GreaterFinder(T n1, T n2) : num1(n1), num2(n2) {
        std::cout << "Object created with values: " << num1 << " and " << num2 << std::endl;
    }

    // Special function to find the greater of two numbers
    T findGreater() {
        return (num1 > num2) ? num1 : num2;
    }

    // Destructor
    ~GreaterFinder() {
        std::cout << "Object destroyed." << std::endl;
    }
};

int main() {
    // Example with integers
    GreaterFinder<int> intFinder(10, 20);
    std::cout << "Greater number is: " << intFinder.findGreater() << std::endl;

    // Example with doubles
    GreaterFinder<double> doubleFinder(3.14, 2.718);
    std::cout << "Greater number is: " << doubleFinder.findGreater() << std::endl;

    return 0;
}
