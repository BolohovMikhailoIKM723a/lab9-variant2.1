#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

double averageDiagonals(double arr[][COLS]) {
    double sumMain = 0, sumSecondary = 0;
    for (int i = 0; i < ROWS; i++) {
        sumMain += arr[i][i];
    }

    for (int i = 0; i < ROWS; i++) {
        sumSecondary += arr[i][COLS - 1 - i];
    }

    return (sumMain + sumSecondary) / (ROWS * 2);
}
void findMaxElement(double arr[][COLS]) {
    double maxElement = arr[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "максимальний елемент: " << maxElement << endl;
    cout << "розташування: Рядок " << maxRow + 1 << ", Стовпець " << maxCol + 1 << endl;
}
int main() {
    setlocale(LC_ALL, "ukr");
    double matrix[ROWS][COLS];

    cout << "введiть елементи матрицi " << ROWS << "x" << COLS << ":" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "eлемент (" << i + 1 << ")(" << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
    double avgDiagonals = averageDiagonals(matrix);
    cout << "середнє арифметичне значення дiагоналей: " << avgDiagonals << endl;

    findMaxElement(matrix);
    return 0;
}
