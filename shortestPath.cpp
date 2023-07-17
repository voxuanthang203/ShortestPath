#include "shortestPath.h"

vector<vector<cell>> shortestPath(const Matrix *matrix) {
    //create a new matrix for the output (same size with input matrix)
    vector<vector<cell>> output(matrix->rows, vector<cell>(matrix->cols));

    //initialize first row with the same value of the input matrix
    for (int i = 0; i < matrix->cols; i++) {
        output[0][i].length = matrix->matrix[0][i];
        output[0][i].start_cell = i;
        output[0][i].path = "";
    }

    //compute the optimal path for each cell in the output matrix

    return output;
}
