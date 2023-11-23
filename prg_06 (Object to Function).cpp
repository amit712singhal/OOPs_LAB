#include <iostream>
#include <cstring>

using namespace std;

class TIME
{
private:
  int hours;
  int minutes;
  int seconds;

public:
  void get_hr(int h)
  {
    hours = h;
    minutes = 0;
    seconds = 0;
  }
  void get_min(int m)
  {
    minutes = m;
    hours = minutes / 60;
    minutes %= 60;
    seconds = 0;
  }
  void get_sec(int s)
  {
    seconds = s;
    minutes = seconds / 60;
    seconds %= 60;
    hours = minutes / 60;
    minutes %= 60;
  }
  void display_time()
  {
    cout << "Time (in format HOURS:MINUTES:SECONDS) -> " << hours << ":" << minutes << ":" << seconds << endl;
  }

  void add(TIME t[])
  {

    t[2].hours = t[0].hours + t[1].hours;
    t[2].minutes = t[0].minutes + t[1].minutes;
    t[2].seconds = t[0].seconds + t[1].seconds;
    if (t[2].seconds > 60)
    {
      t[2].minutes += t[2].seconds / 60;
      t[2].seconds %= 60;
    }
    if (t[2].minutes > 60)
    {
      t[2].hours += t[2].minutes / 60;
      t[2].minutes %= 60;
    }
  }
};

int main()
{
  int choice, hr, sec, min;
  TIME t_arr[3];

  for (int i = 0; i < 2; i++)
  {
    cout << endl
         << "---------------------TIME_" << i + 1 << "---------------------" << endl;
    cout << "Press 1 to enter time in Hours" << endl;
    cout << "Press 2 to enter time in Minutes" << endl;
    cout << "Press 3 to enter time in Seconds" << endl;

    cout << "Enter your choice :- ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter No. of Hours :- ";
      cin >> hr;
      t_arr[i].get_hr(hr);
      break;
    case 2:
      cout << "Enter No. of Minutes :- ";
      cin >> min;
      t_arr[i].get_min(min);
      break;
    case 3:
      cout << "Enter No. of Seconds :- ";
      cin >> sec;
      t_arr[i].get_sec(sec);
      break;
    default:
      cout << "Wrong Choice" << endl;
      break;
    }
  }

  t_arr[0].display_time();

  t_arr[1].display_time();

  t_arr[2].add(t_arr);
  cout << "Added ";
  t_arr[2].display_time();
  return 0;
}
