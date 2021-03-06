#pragma once

#include <iostream>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "math.h"

using namespace std;

const float dotProduct(const float a[], float *&b);
float* crossProduct(const float a[], const float b[]);
bool ray_triangle_intersection(const float ray_near[], const float ray_dir[], const float Points[][3], float &t);

float** multiple_vertices(float **&triangle);
float*** multiple_triangles(float ***&triangles, int &len, const int polys[][3]);
float** triangle_interpolation(float ***&triangles, const int &N);

const bool getMeshAndFiberEndIntersection(vector<float> &fiberP0, vector<float> &fiberP1, const int &nPoints, const int &nPtsLine, const int &N, const int &npbp,
	vector<vector<float>> &index, const float &step, vector<vector<vector<bool>>> &cubeNotEmpty, const vector<vector<vector<vector<int>>>> &centroidIndex,
	const vector<vector<vector<vector<vector<float>>>>> &almacen, vector<vector<float>> &vertex, vector<vector<int>> &polygons, int &Ind, vector<float>&ptInt) ;

const bool getMeshAndFiberIntersection(vector<vector<float>> &fiber, const int &nPoints, const int &nPtsLine, const int &N, const int &npbp, vector<vector<float>> &index,
	const float &step, vector<vector<vector<bool>>> &cubeNotEmpty, const vector<vector<vector<vector<int>>>> &centroidIndex,
	const vector<vector<vector<vector<vector<float>>>>> &almacen, vector<vector<float>> &vertex, vector<vector<int>>&polygons,
	int &InInd, int &FnInd, vector<float> &InPtInt, vector<float> &FnPtInt);

void meshAndBundlesIntersection(vector<vector<float>> &vertex, const int &n_vertex, vector<vector<int>>&polygons, const int &n_polygons,
	const int &nBundles, vector<int> &nFibers, vector<vector<int>> &nPoints, vector<vector<vector<vector<float>>>> &Points, const int& nPtsLine,
	vector<vector<int>> &InTri, vector<vector<int>> &FnTri, vector<vector<vector<float>>> &InPoints,
	vector<vector<vector<float>>> &FnPoints, vector<vector<int>> &fib_index);