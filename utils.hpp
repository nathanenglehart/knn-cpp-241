#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <vector>
#include <cmath>
#include "eigen3/Eigen/Dense"
#include <fstream>
#include <algorithm>
#include "eigen3/Eigen/Geometry"

/* Nathan Englehart, Xuhang Cao, Samuel Topper, Ishaq Kothari (Autumn 2021) */


template <typename T> T * to_array(std::vector<T>, int);
std::vector<int> argpartition(std::vector<double>, int);

#endif
