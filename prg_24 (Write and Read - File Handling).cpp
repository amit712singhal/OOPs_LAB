#include <iostream>
#include <fstream>

using namespace std;

// Class to store student information
class Student
{
public:
    string name;
    int age;
    char sex;
    double height;
    double weight;

    // Function to read student information from the keyboard
    void read()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter sex (M/F): ";
        cin >> sex;

        cout << "Enter height (in meters): ";
        cin >> height;

        cout << "Enter weight (in kilograms): ";
        cin >> weight;
    }

    // Function to write student information to a file
    void writeToFile(ofstream &file)
    {
        file << name << " " << age << " " << sex << " " << height << " " << weight << endl;
    }

    // Function to display student information
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Height: " << height << " meters" << endl;
        cout << "Weight: " << weight << " kilograms" << endl;
    }
};

int main()
{
    // Open a file for writing
    ofstream outFile("student_info.txt");

    if (!outFile)
    {
        cerr << "Error opening file for writing." << endl;
        return 1; // Return with an error code
    }

    // Create a Student object and read information from the keyboard
    Student student;
    student.read();

    // Write the student information to the file
    student.writeToFile(outFile);

    // Close the file
    outFile.close();

    // Open the file for reading
    ifstream inFile("student_info.txt");

    if (!inFile)
    {
        cerr << "Error opening file for reading." << endl;
        return 1; // Return with an error code
    }

    // Create a new Student object to store the read information
    Student readStudent;

    // Read student information from the file
    inFile >> readStudent.name >> readStudent.age >> readStudent.sex >> readStudent.height >> readStudent.weight;

    // Display the read student information
    cout << "\nStudent Information read from file:" << endl;
    readStudent.display();

    // Close the file
    inFile.close();

    return 0;
}
