#pragma once


class Node {
private:
	int value;
	Node ** children; //pointer to an array of Node pointers
public:
	Node();
	void incrementValue();
	int getValue();
	void initializeChildren();
	Node ** getChildren();
};