#include "node.h"
#define ALPHABET_SIZE 26;

Node::Node() {
	this->value = 0;
	this->children = new Node[26];
}

int Node::getValue() {
	return this->value;
}

void Node::incrementValue() {
	this->value++;
}

Node * Node::getChildren() {
	return this->children;
}