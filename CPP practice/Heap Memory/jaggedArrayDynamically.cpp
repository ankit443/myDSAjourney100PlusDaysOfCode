#include <iostream>

using namespace std;

int main() {
    // Define the number of rows in the jagged array
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    // Dynamically allocate an array of pointers to int (rows)
    int** jaggedArray = new int*[numRows];

    // Get the number of columns for each row and allocate memory
    for (int i = 0; i < numRows; ++i) {
        int numCols;
        cout << "Enter the number of columns for row " << i << ": ";
        cin >> numCols;

        // Dynamically allocate an array of ints (columns) for each row
        jaggedArray[i] = new int[numCols];

        // Initialize the elements of the current row to some values (for demonstration)
        for (int j = 0; j < numCols; ++j) {
            jaggedArray[i][j] = i * 10 + j;
        }
    }

    // Print the jagged array
    cout << "\nJagged Array:\n";
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numRows; ++j) {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < numRows; ++i) {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;

    return 0;
}
