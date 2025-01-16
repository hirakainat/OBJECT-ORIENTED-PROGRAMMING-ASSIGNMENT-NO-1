#include <iostream>
using namespace std;

void funct(int**& array, int& rows, int& columns) {
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[columns];
    }
}

void fillARRAY(int** array, const int& rows, const int& columns) {
    if (rows > 0 && columns > 0) {
        cout << "Enter 2D array elements:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cin >> array[i][j];
            }
        }
    }
    else {
        cout << "Please enter valid rows and columns." << endl;
    }
}

int* convertTo1DArray(int** array, const int& rows, const int& columns) {
    int totalElements = rows * columns;
    int* oneDArray = new int[totalElements];  

    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            oneDArray[index++] = array[i][j];
        }
    }

    return oneDArray;  
}

void sorted(int*& newArray, const int totalelements) {
    for (int i = 0; i < totalelements - 1; i++) {
        for (int j = 0; j < totalelements - i - 1; j++) {
            if (newArray[j] > newArray[j + 1]) {
                int temp = newArray[j];
                newArray[j] = newArray[j + 1];
                newArray[j + 1] = temp;
            }
        }
    }
}

void display(int* newArray, const int totalelements) {
    cout << "The sorted 1D array is:" << endl;
    for (int i = 0; i < totalelements; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;
}

int main() {
    int rows = 0, columns = 0;
    int** array = nullptr;  

    funct(array, rows, columns);

    
    fillARRAY(array, rows, columns);

   
    int* newArray = convertTo1DArray(array, rows, columns);

    
    cout << "The converted 1D array is:" << endl;
    for (int i = 0; i < rows * columns; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

   
    sorted(newArray, rows * columns);

    
    display(newArray, rows * columns);

   
    for (int i = 0; i < rows; i++) {
        delete[] array[i];  
    }
    delete[] array;         
    delete[] newArray;      

    return 0;
}
