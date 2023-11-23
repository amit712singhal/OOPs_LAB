#include <iostream>
using namespace std;

// Base class SHAPE
class SHAPE
{
protected:
    double length;
    double width;

public:
    void getdata()
    {
        cout << "Enter length -> ";
        cin >> length;
        cout << "Enter width -> ";
        cin >> width;
    }

    virtual void display()
    {
        cout << "Area :: " << length * width << endl;
    }
};

// Derived class TRIANGLE
class TRIANGLE : public SHAPE
{
public:
    void display() override
    {
        cout << "Area of Triangle is :: " << 0.5 * length * width << endl;
    }
};

// Derived class RECTANGLE
class RECTANGLE : public SHAPE
{
public:
    void display() override
    {
        cout << "Area of Rectangle is :: " << length * width << endl;
    }
};

int main()
{
    SHAPE *shape;
    int choice;
    cout << "---------- Menu Driven Program ----------" << endl;
    cout << "Enter (1) for Triangle" << endl
         << "Enter (2) for Rectangle" << endl
         << "Enter your choice :: ";
    cin >> choice;

    if (choice == 1)
    {
        shape = new TRIANGLE;
    }
    else if (choice == 2)
    {
        shape = new RECTANGLE;
    }
    else
    {
        cout << "Invalid choice. Exiting..." << endl;
        return 0;
    }

    shape->getdata();
    shape->display();

    delete shape;

    return 0;
}