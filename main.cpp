#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#include "shortestPath.h"
#include "handleInput.h"

int main() {
    string input = "input-small.txt";

    Matrix* matrix = createMatrix(input);

    //edge case: empty matrix:
    if (matrix->rows == 0 && matrix->cols == 0) {
        cout << "Empty matrix" << endl;
        return 0;
    }

    //call the shortestPath function to compute the optimal path
    vector<vector<cell>> output = shortestPath(matrix);

    //print out the result
    for (int i = 0; i < matrix->cols; i++) {
        cout << output[matrix->rows - 1][i].length << " " << output[matrix->rows - 1][i].start_cell << output[matrix->rows - 1][i].path << endl;
    }

    return 0;
}
