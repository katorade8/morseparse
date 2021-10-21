#pragma once

class Node {
private:
	int value;
	Node ** children; //pointer to an array of Node pointers
public:
	Node();
	int getValue();
	void incrementValue();
	Node ** getChildren();
};