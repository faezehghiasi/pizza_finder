#pragma once
#include"Node_SubPizza.h"
#include<iostream>
#include<vector>
using namespace std;
class Node_MainPizza:public BasicNode
{
private:
	
public:
	vector< Node_SubPizza> branches;
	Node_MainPizza(double xVal, double yVal, string nameVal): BasicNode(xVal, yVal, nameVal){}
	Node_MainPizza(Point p, string nameVal) : BasicNode(p, nameVal) {}
	void addBranch(Node_SubPizza input);
	void printSubBranches();
	void print(){}
	friend class TwoDTree;
};

