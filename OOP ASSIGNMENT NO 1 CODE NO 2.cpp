Skip to main content
Google Classroom's 10th anniversary logo featuring a party hat and animated balloons
Classroom
Object oriented Programming BSCS - 3B




//FUNCTION NO 1
#include <iostream>
#include <string>
using namespace std;
int** AllocateMemory(int& rows, int& cols) { //here the advantage of sending two parameters by reference is to change the values of the rows and the columns also in the main along with function instead of copying the paramters in thee function as the functions compilated,the function and its paramter will be vanished
    rows = 0, cols = 0;
    cout << "enter the numbers of the rows" << endl;
    cin >> rows;
    cout << "enter the numbers of the columns" << endl;
    cin >> cols;
    //initialize 2d array dynamically
    int** array = new int* [rows];
    for (int i = 0;i < rows;i++) {
        array[i] = new int[cols];
    }
    return array;
}
void InitializeMatrix(int** matrix, const int& rows, const int& cols) {
    //here the purpose of taking the constant is just not to change the numbers of tthe rows and the columns again because already in the above function there is the chhoice to have no of rows and columns according to the user
    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            matrix[i][j] = 0;
        }
    }



}
void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
    cout << "the 2d array is" << endl;
    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;

    }
}
void DeallocateMemory(int** matrix, const int& rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
}
int main() {
    int rows = 0, cols = 0;
    int** m = new int* [rows];
    for (int i = 0;i < rows;i++) {
        m[i] = new int[cols];
    }
    int** matrix = AllocateMemory(rows, cols);
    InitializeMatrix(matrix, rows, cols);
    DisplayMatrix(matrix, rows, cols);
    DeallocateMemory(matrix, rows);
    system("pause");
    return 0;
}
