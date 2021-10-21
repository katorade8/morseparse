#include <iostream>
#include <map>

#include "node.h"
#include "trie.h"


int main(int argc, char **argv) {
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
	trie.addDictionary("../notsobig.txt");

	std::cout << 'c' - 'a' << std::endl;
	std::cout << trie.findWord("of") << std::endl;

	//free alloc'd memory

	return 0;
}