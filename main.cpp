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
    
    //create output file
    ofstream outputFile("output.txt");

    //print to output file
    if (outputFile.is_open()) {
        for (int i = 0; i < matrix->cols; i++) {
            outputFile << output[matrix->rows - 1][i].length << " " << output[matrix->rows - 1][i].start_cell << output[matrix->rows - 1][i].path << endl;
        }

        //Close output file
        outputFile.close();
    }
    else {
        cout << "Unable to open the output file." << endl;
    }


    return 0;
}
