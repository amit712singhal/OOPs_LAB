#include <iostream>

using namespace std;

class IInd_NUM; /* Forward Declaration */

class Ist_NUM
{
private:
    int NUM_1;

public:
    Ist_NUM(int x)
    {
        this->NUM_1 = x;
    }
    friend void compare_2_no(Ist_NUM, IInd_NUM);
};

class IInd_NUM
{
private:
    int NUM_2;

public:
    IInd_NUM(int y)
    {
        this->NUM_2 = y;
    }
    friend void compare_2_no(Ist_NUM, IInd_NUM);
};

void compare_2_no(Ist_NUM x, IInd_NUM y)
{
    int num_1 = x.NUM_1;
    int num_2 = y.NUM_2;
    if (num_1 > num_2)
    {
        cout << num_1 << " > " << num_2 << endl;
    }
    else if (num_1 == num_2)
    {
        cout << num_1 << " = " << num_2 << endl;
    }
    else
    {
        cout << num_1 << " < " << num_2 << endl;
    }
}

int main()
{
    Ist_NUM a(116);
    IInd_NUM b(105);
    compare_2_no(a, b);

    Ist_NUM p(7);
    IInd_NUM q(9);
    compare_2_no(p, q);

    Ist_NUM m(77);
    IInd_NUM n(77);
    compare_2_no(m, n);
    return 0;
}