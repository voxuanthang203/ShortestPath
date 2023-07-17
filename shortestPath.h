#ifndef SHORTEST_PATH_H
#define SHORTEST_PATH_H

#include "handleInput.h"
#include <limits>
#include <algorithm>

using namespace std;

struct cell {
    double length;
    int start_cell;
    string path;
};

vector<vector<cell>> shortestPath(const Matrix*);

#endif