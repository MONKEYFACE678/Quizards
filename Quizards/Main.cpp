//hello
#include "FlashCard.h"
#include "FlashCardManager.h"
#include <iostream>

int main() {
	FlashCardManager manager("cards.txt");
	manager.getCards();
	
	FlashCard randomCard = manager.randomCard();

	std::cout << "The definition of the card is: " << randomCard.getDef() << std::endl;

	/*
	* This function will ask the user to input the answer from the question asked.
	* @param answerInput will be the answer given by the user
	* @return If answer is city after @param randomCard.isCorrect(""), it will be 1 or 0 otherwise.
	*/
	
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


}