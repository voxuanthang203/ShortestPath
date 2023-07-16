#ifndef SHORTEST_PATH_H
#define SHORTEST_PATH_H

#include "handleInput.h"
#include <vector>
#include <string>
using namespace std;

struct output {
    int length;
    int start_cell;
    string path;
};

vector<vector<output>> shortestPath(const int, const int, const Matrix*);

#endif