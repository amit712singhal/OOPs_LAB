#include <iostream>
using namespace std;

class IInd_NUM;  /* Forward Declaration */
class IIIrd_NUM; /* Forward Declaration */

class Ist_NUM
{
private:
    int Num1;

public:
    Ist_NUM(int x)
    {
        this->Num1 = x;
    }
    friend void compare_3_no(Ist_NUM, IInd_NUM, IIIrd_NUM);
};

class IInd_NUM
{
private:
    int Num2;

public:
    IInd_NUM(int y)
    {
        this->Num2 = y;
    }
    friend void compare_3_no(Ist_NUM, IInd_NUM, IIIrd_NUM);
};

class IIIrd_NUM
{
private:
    int Num3;

public:
    IIIrd_NUM(int z)
    {
        this->Num3 = z;
    }
    friend void compare_3_no(Ist_NUM, IInd_NUM, IIIrd_NUM);
};

void compare_3_no(Ist_NUM x, IInd_NUM y, IIIrd_NUM z)
{
    int num_1 = x.Num1;
    int num_2 = y.Num2;
    int num_3 = z.Num3;
    int result = (num_1 > num_2) ? ((num_1 > num_3) ? num_1 : num_3) : ((num_2 > num_3) ? num_2 : num_3);
    cout << "Greatest among (" << num_1 << ", " << num_2 << " & " << num_3 << ") is -> " << result << endl;
}

int main()
{
    cout << endl;
    Ist_NUM p(84);
    IInd_NUM q(74);
    IIIrd_NUM r(94);
    compare_3_no(p, q, r);

    Ist_NUM x(3);
    IInd_NUM y(1);
    IIIrd_NUM z(2);
    compare_3_no(x, y, z);

    Ist_NUM a(116);
    IInd_NUM b(145);
    IIIrd_NUM c(105);
    compare_3_no(a, b, c);
    return 0;
}