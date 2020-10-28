#include "CardDeck.h"
CardDeck::CardDeck() {
	currentCardIndex = 0;
	for (int i = 0; i < 4; ++i) {
		for (int k = 0; k < 13; ++k) {
			Card kort=Card(static_cast<Suit>(i), static_cast<Rank>(k));
			card.push_back(kort);
		}
	}
}

void CardDeck::swap(int a, int b) {
	Card temp = card[a];
	card[a] = card[b];
	card[b] = temp;
}

void CardDeck::print() {
	for (int i = 0; i < card.size(); ++i) {
		cout << card[i].toStringCard()<<' ';
}
}

void CardDeck::printShort() {
	for (int i = 0; i < card.size(); ++i) {
		cout << card[i].toStringShortCard()<<' ';
	}
}

void CardDeck::shuffle(){
	for (int i = 0; i < 1000; ++i) {
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		swap(num1, num2);
	}
}

const Card& CardDeck::drawCard() {
	const Card& kort = card[currentCardIndex];
		++currentCardIndex;
		return kort;
}