#pragma once
#include <string>

#include "node.h"


class Trie {
private:
	Node * root;
	int nodeCount;
	int wordCount;
	void recursiveDestroy(Node * node, int& deleteCount);
public:
	Trie();
	virtual ~Trie();
	void addDictionary(std::string fileName);
	void addWord(std::string word);
	bool findWord(std::string word);
	Node * getRoot();
};