#include <iostream>
using namespace std;

class print; /* Forward Declaration */

class get_xy
{
private:
    int x, y;

public:
    get_xy(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    friend class print;
};

class print
{
private:
    int sum_result;

public:
    print(get_xy &n)
    {
        sum_result = n.x + n.y;
        cout << "----------- The first_number is :: " << n.x << " ------------" << endl;
        cout << "----------- The second_number is :: " << n.y << " -----------" << endl;
        cout << endl
             << "----------- Sum of " << n.x << " & " << n.y << " is :: " << sum_result << " -----------" << endl;
    }
};

int main()
{
    cout << endl;
    get_xy num(123, 987);
    print display(num);
    return 0;
}