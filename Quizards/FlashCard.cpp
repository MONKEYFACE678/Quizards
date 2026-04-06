#include "FlashCard.h"
#include <string>

std::string FlashCard::toLower(std::string word) {
		std::string newWord = "";
		for (char c : word) {
			newWord += tolower(c);
		}

		return newWord;
	}

FlashCard::FlashCard(std::string d, std::string t) : definition(d), term(toLower(t)) {}

bool FlashCard::isCorrect(std::string t) {
		return toLower(t) == term;
	}

std::string FlashCard::getDef() {
	return definition;
}

std::string FlashCard::getTerm() {
	return term;
}