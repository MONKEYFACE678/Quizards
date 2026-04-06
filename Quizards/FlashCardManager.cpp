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
using json = nlohmann::json;

void FlashCardManager::getCards() {
    std::srand(std::time(0));
    std::string line;
    std::vector<std::string> wordsFromFile;
    
    try {
        json data = json::parse(infile);

        for (json card : data["cards"]) {
            cards.push_back(FlashCard(card["def"], card["term"]));
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error parsing JSON: " << e.what() << std::endl;
    }

    
}

FlashCard FlashCardManager::randomCard() {
    if (cards.empty()) {
        return FlashCard("NO CARD", "NO CARD");
    }
    int index = rand() % cards.size();

    return cards[index];
}



void FlashCardManager::removeCard(FlashCard card) {

    cards.erase(std::remove(cards.begin(), cards.end(), card), cards.end());
}

bool FlashCardManager::isEmpty() {
    return cards.empty();
}
