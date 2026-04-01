#include "FlashCardManager.h"
#include "FlashCard.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>



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
    int index = rand() % cards.size();

    return cards[index];
}