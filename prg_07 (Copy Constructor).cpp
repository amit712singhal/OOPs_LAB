#include <iostream>

using namespace std;

const int size = 8;

class FIBONACCI
{
private:
    int arr[size];

public:
    FIBONACCI() // default constructor
    {
        for (int j = 0; j < size; j++)
            arr[j] = -1;
    }

    FIBONACCI(FIBONACCI &n) // copy constructor
    {
        cout << "-------------------------- COPY CONSTRUCTOR ---------------------------" << endl;
        for (int j = 0; j < size; j++)
            arr[j] = n.arr[j];
    }

    int fib(int n)
    {
        if (n == 1)
            return 0;
        if (n == 2)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }

    void set_value(int n)
    {
        for (int j = 1; j <= n; j++)
            arr[j - 1] = fib(j);
    }

    void print_value()
    {
        for (int j = 0; j < size && arr[j] != -1; j++)
        {
            if (j > 0)
                cout << ", ";
            cout << arr[j];
        }
        cout << endl;
    }
};

int main()
{
    FIBONACCI f1;
    f1.set_value(size);
    cout << endl
         << "Fibonacci Series for 1st Object (upto " << size << " terms): ";
    f1.print_value();
    FIBONACCI f2 = f1;
    cout << "Fibonacci Series for 2nd Object (upto " << size << " terms): ";
    f2.print_value();
    cout << endl;
    return 0;
}