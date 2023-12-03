#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Function to remove white spaces from a string
string removeWhiteSpaces(const string &input)
{
    stringstream ss;
    for (char ch : input)
    {
        if (!isspace(ch))
        {
            ss << ch;
        }
    }
    return ss.str();
}

int main()
{
    // Input and output file names
    const string inputFileName = "input.txt";
    const string outputFileName = "output.txt";

    // Open input file
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open())
    {
        cerr <<endl<< "Error opening input file: " << inputFileName << endl;
        return 1;
    }

    // Open output file
    ofstream outputFile(outputFileName);
    if (!outputFile.is_open())
    {
        cerr << endl<<"Error opening output file: " << outputFileName << endl;
        inputFile.close();
        return 1;
    }

    // Process each character in the input file
    char ch;
    while (inputFile.get(ch))
    {
        // Remove white spaces from the character
        if (!isspace(ch))
        {
            outputFile << ch;
        }
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << endl<<"White spaces removed and content saved to: " << outputFileName << endl;

    return 0;
}
