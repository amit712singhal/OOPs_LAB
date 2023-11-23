#include <iostream>
using namespace std;

// Class First
class First
{
protected:
    int bookNo;
    string bookName;

public:
    void getData()
    {
        cout << "Enter book number: ";
        cin >> bookNo;
        cout << "Enter book name: ";
        cin.ignore();
        getline(cin, bookName);
    }

    void putData()
    {
        cout << "Book Number: " << bookNo << endl;
        cout << "Book Name: " << bookName << endl;
    }
};

// Class Second
class Second
{
protected:
    string authorName;
    string publisher;

public:
    void getData()
    {
        cout << "Enter author name: ";
        getline(cin, authorName);
        cout << "Enter publisher: ";
        getline(cin, publisher);
    }

    void showData()
    {
        cout << "Author Name: " << authorName << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

// Class Third (Derived from First and Second)
class Third : public First, public Second
{
private:
    int pages;
    int yearOfPublication;

public:
    void getData()
    {
        First::getData();
        Second::getData();
        cout << "Enter number of pages: ";
        cin >> pages;
        cout << "Enter year of publication: ";
        cin >> yearOfPublication;
    }

    void displayData()
    {
        First::putData();
        Second::showData();
        cout << "Number of Pages: " << pages << endl;
        cout << "Year of Publication: " << yearOfPublication << endl;
    }
};

int main()
{
    const int numObjects = 2;
    Third library[numObjects];

    for (int i = 0; i < numObjects; i++)
    {
        cout << endl
             << "---------------- Enter details for book_" << i + 1 << " ------------------" << endl;
        library[i].getData();
    }
    cout << endl
         << "-------------- Displaying information for all books --------------" << endl;
    for (int i = 0; i < numObjects; i++)
    {
        cout << endl
             << "Book " << i + 1 << " details -->" << endl;
        library[i].displayData();
    }

    return 0;
}