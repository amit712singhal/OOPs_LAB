#include <iostream>
#include <stdlib.h>

using namespace std;

class STUDENT
{
private:
    string name;
    int age;

public:
    // initializing constructor
    STUDENT(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display(void)
    {
        cout << "Name of Student: " << name << endl;
        cout << "Age of Student: " << age << endl;
    }

    void *operator new(size_t size)
    {
        cout << endl
             << "Overloading new operator with size -> " << size << endl;
        void *p = ::operator new(size);
        return p;
    }

    void operator delete(void *p)
    {
        cout << "Overloading delete operator -> MEMORY DEALLOCATED" << endl;
        free(p);
    }
};

int main()
{
    STUDENT *s1 = new STUDENT("Amit Singhal", 12);

    s1->display();

    delete s1;

    return 0;
}