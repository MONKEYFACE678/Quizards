#include "FlashCard.h"
#include "FlashCardManager.h"
#include <iostream>

int main() {
	FlashCardManager manager("cards.txt");
	manager.getCards();
	
	FlashCard randomCard = manager.randomCard();

	std::cout << "The definition of the card is: " << randomCard.getDef() << std::endl;
	std::cout << "Is the term city? " << randomCard.isCorrect("City") << std::endl;
	std::cout << "Is the term village? " << randomCard.isCorrect("Village") << std::endl;

}