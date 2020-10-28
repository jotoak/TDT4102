#pragma once
#include "Card.h"
class CardDeck {
private:
	vector<Card> card;
	int currentCardIndex;
public:
	void print();
	void printShort();
	void shuffle();
	const Card& drawCard();
void swap(int a, int b);
	CardDeck();
 };
