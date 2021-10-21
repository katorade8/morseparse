#include "node.h"
#include <cstdlib>


Node::Node() {
	this->value = 0;
	this->children = new Node * [26];
}

Node::~Node() {
	delete(this->children);
}

int Node::getValue() {
	return this->value;
}

void Node::incrementValue() {
	this->value++;
}

Node ** Node::getChildren() {
	return this->children;
}