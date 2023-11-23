#include <iostream>
using namespace std;

class Integer
{
private:
    int i;

public:
    // (default) initializing constructor
    Integer(int i = 0)
    {
        this->i = i;
    }

    // Overloading the prefix operator
    Integer &operator++()
    {
        i++;
        return *this;
    }

    // Overloading the postfix operator
    Integer operator++(int)
    {
        Integer temp = *this;
        ++i;
        return temp;
    }

    void display()
    {
        cout << "i = " << i << endl;
    }
};

int main()
{
    Integer i1(3);

    cout << endl
         << "--------- Before increment ---------" << endl;
    i1.display();

    // Using the pre-increment operator
    Integer i2 = ++i1;

    cout << "--------- After (++)pre-increment ---------" << endl;
    cout << "i1 | ";
    i1.display();
    cout << "i2 | ";
    i2.display();

    // Using the post-increment operator
    Integer i3 = i1++;

    cout << "--------- After post-increment(++) ---------" << endl;
    cout << "i1 | ";
    i1.display();
    cout << "i3 | ";
    i3.display();

    return 0;
}