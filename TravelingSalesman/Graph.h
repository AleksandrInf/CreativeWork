#pragma once
#pragma once
#include <glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;

struct vertCoord
{
	int x, y;
};
const int maxSize = 20;
class Graph
{
public:
	vector<int> vertList;
	int adjMatrix[maxSize][maxSize] = { 0 };

	Graph();
	~Graph();
	bool IsEmpty();
	bool IsFull();

	int getVertText(int i) { return vertList[i]; };

	vector<int> getVertexList() { return vertList; };

	int getAdjMatrixElem(int i, int j) { return adjMatrix[i][j]; };

	void setEdgeZero(int i, int j) {
		adjMatrix[i][j] = 0; adjMatrix[j][i] = 0;
	}
	int GetAmountVerts() { return vertList.size(); };

	int GetVertPos(const int& vertex);

	int GetAmountEdges();

	void InsertVertex(const int & vertex);

	void InsertEdge(const int& vertex, const int& vertex2, int weigth);
	void Print();

	void eraseLastVertex();

	void eraseEdge(const int& vertex1, const int& vertex2);

	void drawGraph();


};



