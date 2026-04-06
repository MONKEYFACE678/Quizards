#include "FlashCard.h"
#include "FlashCardManager.h"
#include <iostream>

int main() {
	FlashCardManager manager("cards.json");
	manager.getCards();

	while (!manager.isEmpty()) {
		FlashCard randomCard = manager.randomCard();

		std::cout << "The definition of the card is: " << randomCard.getDef() << std::endl;

		std::string answerInput;
		std::cout << "Answer: ";
		std::cin >> answerInput;

		if (randomCard.isCorrect(answerInput)) {
			std::cout << "Great job!" << std::endl;
			manager.removeCard(randomCard);
		}
		else {
			std::cout << "Please try again!" << std::endl;
			std::cout << "Term was " << randomCard.getTerm() << std::endl;
		}
	}

	std::cout << "You know all the terms!";
}