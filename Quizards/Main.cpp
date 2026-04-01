#include "FlashCard.h"
#include "FlashCardManager.h"
#include <iostream>

int main() {
	FlashCardManager manager("cards.txt");
	manager.getCards();
	
	FlashCard randomCard = manager.randomCard();

	std::cout << randomCard.getDef() << std::endl;
	std::cout << randomCard.isCorrect("City") << std::endl;
	std::cout << randomCard.isCorrect("Village") << std::endl;

}