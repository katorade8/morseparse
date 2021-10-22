#include <fstream>
#include <sstream>
#include <iostream>

#include "trie.h"
#define ALPHABET_SIZE 26

Trie::Trie() {
	root = new Node();
	nodeCount = 1;
}

Trie::~Trie() {
	int deleteCount = 0;
	recursiveDestroy(this->root, deleteCount);
	std::cerr << deleteCount << std::endl;
	std::cerr << this->nodeCount << std::endl;
}

void Trie::recursiveDestroy(Node * node, int &deleteCount) {
	if(node != nullptr) {
		Node ** children = node->getChildren();
		for(size_t i = 0; i < ALPHABET_SIZE; i++) {
			Node * child = children[i]; //foreach loop?
			if(child == nullptr) {
				std::cerr << "deleting pointer\n";
				deleteCount++;
				delete(child);
				return;
			}
			else
				std::cerr << "recursing\n";
				recursiveDestroy(children[i], deleteCount);
		}
	}
}

void Trie::addDictionary(std::string fileName) {
	std::string word;
	std::ifstream infile(fileName);
	if(!infile.is_open())
		std::cerr << "unable to open file\n";
	while(getline(infile, word)) {
		for(size_t i = 0; i < word.length(); i++) {
			if(isupper(word[i])) //convert to lower case
				word[i] = tolower(word[i]);
		}
		addWord(word);
	}
}

void Trie::addWord(std::string word) {
	Node * localRoot = this->root;
	for(size_t i = 0; i < word.length(); i++) {
		char c = word[i];
		int index = c - 'a'; //index from char substraction
		if(localRoot->getChildren()[index] == nullptr) {
			localRoot->getChildren()[index] = new Node();
			nodeCount++;
		}
		localRoot = localRoot->getChildren()[index]; //set localRoot to child root
	}
	if(localRoot->getValue() == 0)
		localRoot->incrementValue(); //valid words have value 1
}

bool Trie::findWord(std::string word) {
	Node * localRoot = this->root;
	for(size_t i = 0; i < word.length(); i++) {
		char c = word[i];
		int index = c - 'a'; //index from char substraction
		if(localRoot->getChildren()[index] == nullptr)
			return false;
		localRoot = localRoot->getChildren()[index]; //set localRoot to child root
	}
	if(localRoot->getValue() > 0)
		return true; //valid word
	else 
		return false;
}

Node * Trie::getRoot() {
	return this->root;
}