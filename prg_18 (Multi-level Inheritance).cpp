#include <iostream>
using namespace std;

// Class STUDENT
class STUDENT
{
protected:
    int rollNo;
    string name;

public:
    void getStudentInfo()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }

    void displayStudentInfo()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Class EXAM (Inherits from STUDENT)
class EXAM : public STUDENT
{
protected:
    int marks[6];

public:
    void getExamMarks()
    {
        cout << "Enter Marks for 6 Subjects:" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayExamMarks()
    {
        cout << "Marks in 6 Subjects:" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

// Class RESULT (Inherits from EXAM)
class RESULT : public EXAM
{
private:
    int totalMarks;

public:
    void calculateTotalMarks()
    {
        totalMarks = 0;
        for (int i = 0; i < 6; i++)
        {
            totalMarks += marks[i];
        }
    }

    void displayResult()
    {
        displayStudentInfo();
        displayExamMarks();
        cout << "_______________________________ Total Marks :: " << totalMarks << " __________________________________" << endl;
    }
};

int main()
{
    RESULT studentResult;
    cout << endl
         << "--------------------------- Enter Student Information ----------------------------" << endl;
    studentResult.getStudentInfo();
    studentResult.getExamMarks();
    studentResult.calculateTotalMarks();

    cout << endl
         << "--------------------------- Displaying Student Result ----------------------------" << endl;
    studentResult.displayResult();

    return 0;
}
