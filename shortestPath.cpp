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

    //case when there is only one row:
    if (matrix->rows == 1) {
        return output;
    }

    //compute the optimal path for each cell in the output matrix
    int i = 1;
    while (i < matrix->rows) {
        int j = 0;
        while (j < matrix->cols) {
            double south = numeric_limits<double>::infinity();
            double south_east = numeric_limits<double>::infinity();
            double south_west = numeric_limits<double>::infinity();
            if (i - 1 >= 0) {
                south = output[i - 1][j].length + matrix->matrix[i][j];
            }
            if (i - 1 >= 0 && j + 1 < matrix->cols) {
                south_west = output[i - 1][j + 1].length + 1.4*matrix->matrix[i][j];
            }
            if (i - 1 >= 0 && j - 1 >= 0) {
                south_east = output[i - 1][j - 1].length + 1.4*matrix->matrix[i][j];
            }
            output[i][j].length = min(south, min(south_east, south_west));
            if (output[i][j].length == south) {
                output[i][j].start_cell = output[i - 1][j].start_cell;
                output[i][j].path = output[i - 1][j].path + " S";
            }
            else if (output[i][j].length == south_east) {
                output[i][j].start_cell = output[i - 1][j - 1].start_cell;
                output[i][j].path = output[i - 1][j - 1].path + " SE";
            }
            else {
                output[i][j].start_cell = output[i - 1][j + 1].start_cell;
                output[i][j].path = output[i - 1][j + 1].path + " SW";
            }
            j++;
        }
        i++;
    }

    return output;
}
