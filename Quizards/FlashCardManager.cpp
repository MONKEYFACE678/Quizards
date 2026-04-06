#include "FlashCardManager.h"
#include "FlashCard.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "json.hpp"

void FlashCardManager::getCards() {
    std::srand(std::time(0));
    std::string line;
    std::vector<std::string> wordsFromFile;

    while (std::getline(infile, line, ','))
    {
        std::vector<FlashCard> cards;
        wordsFromFile.push_back(line);
        std::istringstream iss(line);
    }

    for (int i = 0; i <= (wordsFromFile.size() / 2); i += 2) {
        cards.push_back(FlashCard(wordsFromFile[i], wordsFromFile[i + 1]));
    }
}

FlashCard FlashCardManager::randomCard() {
    if (cards.empty()) {
        throw std::length_error("No cards");
        return FlashCard("NO CARDS","NO CARDS");
    }
    int index = rand() % cards.size();

    return cards[index];
}