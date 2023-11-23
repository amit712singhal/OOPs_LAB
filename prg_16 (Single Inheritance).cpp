#include <iostream>
#include <string>
using namespace std;

class BasicInfo
{
protected:
    string name;
    long long unsigned int roll_no;
    char sex;

public:
    void getdata()
    {
        cout << "Enter name :: ";
        getline(cin, name);
        cout << "Enter roll number :: ";
        cin >> roll_no;
        cout << "Enter sex :: ";
        cin >> sex;
    }

    void display()
    {
        cout << "Name -> " << name << endl;
        cout << "Roll Number -> " << roll_no << endl;
        cout << "Sex -> " << sex << endl;
    }
};

class PhysicalFit : public BasicInfo
{
private:
    float height;
    float weight;

public:
    void getdata()
    {
        BasicInfo::getdata();
        cout << "Enter height (in cm) :: ";
        cin >> height;
        cout << "Enter weight (in kg) :: ";
        cin >> weight;
    }

    void display()
    {
        BasicInfo::display();
        cout << "Height -> " << height << " cm" << endl;
        cout << "Weight -> " << weight << " kg" << endl;
    }
};

int main()
{
    PhysicalFit person;

    cout << endl
         << "------------- Enter information -------------" << endl;
    person.getdata();

    cout << endl
         << "-------------Information -------------" << endl;
    person.display();

    return 0;
}