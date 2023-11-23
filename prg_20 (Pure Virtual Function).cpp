#include <iostream>
using namespace std;

// Base class LIST
class LIST
{
public:
    virtual void store() = 0;    // Pure virtual function
    virtual void retrieve() = 0; // Pure virtual function
};

// Derived class stack
class stack : public LIST
{
public:
    void store() override
    {
        cout << "Stored in stack." << endl;
    }

    void retrieve() override
    {
        cout << "Retrieved from stack." << endl;
    }
};

// Derived class queue
class queue : public LIST
{
public:
    void store() override
    {
        cout << "Stored in queue." << endl;
    }

    void retrieve() override
    {
        cout << "Retrieved from queue." << endl;
    }
};

int main()
{
    LIST *ptr;
    cout << endl;
    stack s; // Creating an object of stack
    ptr = &s;
    ptr->store();
    ptr->retrieve();

    queue q; // Creating an object of queue
    ptr = &q;
    ptr->store();
    ptr->retrieve();

    return 0;
}
