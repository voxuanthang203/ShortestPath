#include "handleInput.h"
#include <iostream>
#include <fstream>

struct Matrix* createMatrix(const string filename) {
    ifstream file("input-small.txt");
    if (!file.is_open()) {
        cout << "Unable to open file" << endl;
        return NULL;
    }

    //read number of rows and columns from the first line
    int rows, cols;
    file >> rows >> cols;

    //create a new matrix
    Matrix* result = new Matrix;
    result->rows = rows;
    result->cols = cols;

    //resize matrix for the given dimensions
    result->matrix.resize(rows, vector<int>(cols));

    //Read values for each cells from input file
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (!(file >> result->matrix[i][j])) {
                cerr << "Error reading matrix values from file: " << filename << endl;
                //Clean allocated memory
                delete result;

                return NULL;
            }
        }
    }

    file.close();
    return result;
};