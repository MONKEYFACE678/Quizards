#include <FlashCard.h>
#include <FlashCardManager.h>
#include <Main.cpp>

int main(int argc, char *argv[])
{
	FlashCardManager a(argc, argv);
	FLashCard w;
	w.show();
	return a.exec();
}