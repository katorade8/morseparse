#include "node.h"
#include <cstdlib>
#define ALPHABET_SIZE 26


Node::Node() {
	this->value = 0;
	this->children = new Node * [26];
	initializeChildren();
}

void Node::initializeChildren() {
	for(size_t i = 0; i < ALPHABET_SIZE; i++)
		this->children[i] = nullptr;
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