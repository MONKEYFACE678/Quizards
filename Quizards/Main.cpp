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
	}
	else {
		std::cout << "Please try again!" << std::endl;
	}
	
	std::cout << "Is the term city? " << randomCard.isCorrect("City") << std::endl;
	std::cout << "Is the term village? " << randomCard.isCorrect("Village") << std::endl;

	int main(int argc, char* argv[]);
	{
		FlashCardManager a(argc, argv);
		FLashCard w;
		w.show();
		return a.exec();
	}
}