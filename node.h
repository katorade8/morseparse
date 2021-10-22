#pragma once

class Node {
private:
	int value;
	Node* children;
public:
	int getValue();
	void incrementValue();
	Node getChild(int index);
}