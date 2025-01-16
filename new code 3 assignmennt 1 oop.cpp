#include<iostream>
using namespace std;
void funct(int** array,int& rows,int& columns) {
	cout << "enter the numbers of the rows" << endl;
	cin >> rows;
	cout << "enter the numes of te columns" << endl;
	cin >> columns;
	array = new int* [rows];
	for (int i = 0;i < rows;i++) {
		array[i] = new int[columns];
	}
	
}
void fillARRAY(int** array, const int& rows, const int& columns) {
	if (rows > 0 && columns > 0)){
		cout << "enter 2d array elemenets" << endl;
		for (int i = 0;i < rows;i++) {
			for (int j = 0;j < columns;j++) {
				cin >> array[i][j];
			}
		}
}
	else {
		cout << "take the rows and the columns" << endl;
	}
}
int main() {
	int rows = 0, columns = 0;
	int** array = new int* [rows];
	for (int i = 0;i < rows;i++) {
		array[i] = new int[columns];
	}

	system("pause");
	return 0;
}