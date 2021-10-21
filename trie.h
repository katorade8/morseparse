#pragma once
#include <string>

#include "node.h"


class Trie {
private:
	Node * root;
	int nodeCount;
	int wordCount;
public:
	Trie();
	~Trie();
	void addDictionary(std::string fileName);
	void addWord(std::string word);
	bool findWord(std::string word);
};