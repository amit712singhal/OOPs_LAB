#include <iostream>
#include <stdexcept> // Include the header for exception classes

using namespace std;

// Function to access an element in the array
int getElement(int arr[], int size, int index)
{
    // Check if the index is within the bounds of the array
    if (index < 0 || index >= size)
    {
        // If not, throw an out_of_range exception
        throw out_of_range("Out of bounds");
    }

    // Return the element at the specified index
    return arr[index];
}

int main()
{
    const int arraySize = 5;
    int myArray[arraySize] = {1, 2, 3, 4, 5};

    try
    {
        // Attempt to access elements beyond the array size
        cout << "\nElement at index 2: " << getElement(myArray, arraySize, 2) << endl;
        cout << "\nElement at index 7: " << getElement(myArray, arraySize, 7) << endl; // This will raise an exception
    }
    catch (const exception &e)
    {
        // Catch and handle the exception
        cerr << "\nException caught: Given Index is " << e.what() << endl;
    }

    return 0;
}
