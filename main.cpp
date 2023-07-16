#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#include "handleInput.h"

int main() {
    string input = "input-small.txt";

    Matrix* matrix = createMatrix(input);

    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            cout << matrix->matrix[i][j] << " ";
        }
        cout << endl;
    }
}