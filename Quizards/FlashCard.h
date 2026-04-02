#pragma once

#include <string>
class FlashCard
{
private:
	std::string definition, term;
	std::string toLower(std::string word);

public:
	FlashCard(std::string d, std::string t);

	bool isCorrect(std::string t);
	std::string getDef();
};

