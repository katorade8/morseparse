#include <iostream>
#include <map>
#include <vector>

#include "node.h"
#include "trie.h"


std::vector<std::string> parse(std::string &word, Trie &trie) {
	std::vector<std::string> validWords;
	return validWords;
}

void parseHelper() {

}

int main(int argc, char **argv) {
	std::map<const char, const char*> morseMap = {
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
	std::string morseWord;

	if(argc == 2) {
		morseWord = argv[1];
	}
	else {
		std::cerr << "Invalid input provided\n";
		return -1;
	}

	Trie trie = Trie();
	trie.addDictionary("../notsobig.txt");

	std::cout << 'c' - 'a' << std::endl;
	std::cout << trie.findWord(morseWord) << std::endl;

	//free alloc'd memory

	return 0;
}