#ifndef SHORTEST_PATH_H
#define SHORTEST_PATH_H

#include "handleInput.h"
#include <vector>
#include <string>
#include <limits>
using namespace std;

struct cell {
    int length;
    int start_cell;
    string path;
};

vector<vector<cell>> shortestPath(const Matrix*);

#endif