#include <iostream>
#include <math.h>

using namespace std;

const double PI = 3.14159265359;

float AREA(float r)
{
  return PI * r * r;
}

double AREA(double l, double b)
{
  return l * b;
}

int AREA(int a, int b, int c)
{
  int s = (a + b + c) / 3;

  return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
  float r;
  cout << "Enter radius of CIRCLE (in decimal) :- ";
  cin >> r;
  cout << "Area of Circle = " << AREA(r) << endl;
  double l, b;
  cout << "Enter length & breadth of RECTANGLE (in decimal) :- ";
  cin >> l >> b;
  cout << "Area of Rectangle = " << AREA(l, b) << endl;
  int x, y, z;
  cout << "Enter 3 sides of TRIANGLE (as integer) :- ";
  cin >> x >> y >> z;
  cout << "Area of Triangle = " << AREA(x, y, z) << endl;

  return 0;
}
