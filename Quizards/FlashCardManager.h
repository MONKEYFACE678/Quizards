#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "FlashCard.h"

class FlashCardManager {
private:
	std::fstream infile;

public:
	std::vector<FlashCard> cards;
	FlashCardManager(std::string fileName) : infile(fileName) {};

	void getCards();
	void removeCard(FlashCard);
	bool isEmpty();
	FlashCard randomCard();
};