#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;

public:
    // Constructor
    String(const char *s = "")
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy Constructor
    String(const String &other)
    {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }

    // Overloading + operator for string concatenation
    String operator+(const String &other)
    {
        String newString;
        newString.str = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newString.str, str);
        strcat(newString.str, other.str);
        return newString;
    }

    // Overloading = operator for string assignment
    void operator=(const String &other)
    {
        delete[] str;
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Overloading <= operator for string comparison
    bool operator<=(const String &other)
    {
        return strlen(str) <= strlen(other.str);
    }

    // Display the string
    void display()
    {
        cout << str;
    }
};

int main()
{
    String s1 = "Atul Kumar";
    String s2 = " Singhal";
    String s3;

    cout << "1st String (s1): ";
    s1.display();
    cout << endl;
    cout << "2nd String (s2): ";
    s2.display();
    cout << endl;

    // Using assignment operator
    s3 = s1;
    cout << "3rd String (s3 after assignment): ";
    s3.display();
    cout << endl;

    // Concatenating strings
    s3 = s1 + s2;

    // Displaying concatenated string
    cout << "Concatenated String: ";
    s3.display();
    cout << endl;

    // Comparing strings
    if (s1 <= s2)
    {
        s1.display();
        cout << " is < or = to ";
        s2.display();
        cout << endl;
    }
    else
    {
        s1.display();
        cout << " is > ";
        s2.display();
        cout << endl;
    }

    return 0;
}
