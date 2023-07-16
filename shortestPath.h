#ifndef SHORTEST_PATH_H
#define SHORTEST_PATH_H

#include "handleInput.h"
#include <vector>
#include <string>
using namespace std;

struct cell {
    int length;
    int start_cell;
    string path;
};

vector<vector<cell>> shortestPath(const int, const int, const Matrix*);

#endif