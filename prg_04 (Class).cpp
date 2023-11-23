#include <iostream>

using namespace std;

const int size = 50;

class STUDENT
{
private:
  char name[size];
  char branch[size];
  int roll_no;
  int age;
  int marks[5];

public:
  void get_details(char name[size], char branch[size], int roll_no, int age, int marks[5])
  {
    for (int i = 0; i < size; i++)
    {
      this->name[i] = name[i];
      this->branch[i] = branch[i];
    }
    this->roll_no = roll_no;
    this->age = age;

    for (int i = 0; i < 5; i++)

      this->marks[i] = marks[i];
  }

  void check_percentage()
  {
    int sum = 0;
    float per;
    for (int i = 0; i < 5; i++)
    {
      sum += marks[i];
    }
    per = (sum / 500.0) * 100;

    if (per > 70)
      if (per > 95)
        cout << name << " has amazing performance :: " << per << "%" << endl;
      else if (per > 80)
        cout << name << " has done a good job :: " << per << "%" << endl;
      else
        cout << name << " has decent marks :: " << per << "%" << endl;

    else
      cout << name << " needs to work really hard :: " << per << "%" << endl;

    return;
  }
};

int main()
{
  int no_std = 0;
  cout << "Enter number of students whose details you want to enter :- ";
  cin >> no_std;
  STUDENT arr_std[no_std];
  char get_name[size], get_branch[size];
  int get_roll_no, get_age, get_marks[5];
  for (int i = 0; i < no_std; i++)
  {
    cout << "------------Enter Student_" << i + 1 << " Details--------------" << endl;
    cout << "Enter Name: ";
    cin >> get_name;
    cout << "Enter Branch: ";
    cin >> get_branch;
    cout << "Enter Roll_Number: ";
    cin >> get_roll_no;
    cout << "Enter Age: ";
    cin >> get_age;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; ++i)
      cin >> get_marks[i];
    STUDENT arr_std[i];
    arr_std[i].get_details(get_name, get_branch, get_roll_no, get_age, get_marks);
    arr_std[i].check_percentage();
  }

  return 0;
}
