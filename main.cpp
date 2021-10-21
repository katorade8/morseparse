#include <iostream>
#include <map>
#include "node.h"
#include "trie.h"


int main() {
	std::map <const char, const char*> morseMap = {
		{'a', ".="},
		{'b', "-..."},
		{'c', "-.-."},
		{'d', "-.."},
		{'e', "."},
		{'f', "..-."},
		{'g', "--."},
		{'h', "...."},
		{'i', ".."},
		{'j', ".---"},
		{'k', "-.-"},
		{'l', ".-.."},
		{'m', "--"},
		{'n', "-."},
		{'o', "---"},
		{'p', ".--."},
		{'q', "--.-"},
		{'r', ".-."},
		{'s', "..."},
		{'t', "-"},
		{'u', "..-"},
		{'v', "...-"},
		{'w', ".--"},
		{'x', "-..-"},
		{'y', "-.--"},
		{'z', "--.."}
	};

	Trie trie = Trie();
	trie.addDictionary("notsobig.txt");

	std::cout << "added to trie with no errors\n";

	return 0;
}