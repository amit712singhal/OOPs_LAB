#include <iostream>

using namespace std;

// Class template for finding the greater of two numbers
template <typename T>
class GreaterFinder {
private:
    T num1, num2;

public:
    // Constructor
    GreaterFinder(T n1, T n2) : num1(n1), num2(n2) {
        cout << "Object created with values: " << num1 << " and " << num2 <<  endl;
    }

    // Special function to find the greater of two numbers
    T findGreater() {
        return (num1 > num2) ? num1 : num2;
    }

    // Destructor
    ~GreaterFinder() {
         cout << "Object destroyed." <<  endl;
    }
};

int main() {
    
    cout<<"----------------------- Amit Singhal - 11614802722 (3C7) ---------------------------"<<endl;
    GreaterFinder<int> intFinder(10, 20);
     cout << "Greater number is: " << intFinder.findGreater() <<  endl;

    GreaterFinder<double> doubleFinder(3.14, 2.718);
     cout << "Greater number is: " << doubleFinder.findGreater() <<  endl;

    return 0;
}
