#ifndef HANDLE_INPUT_H
#define HANDLE_INPUT_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

struct Matrix {
    int rows;
    int cols;
    vector<vector<int>> matrix;
};

struct Matrix* createMatrix(const string filename);

#endif