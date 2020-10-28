#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
#include "Blackjack.h"
int main(){
	srand(static_cast<unsigned int> (time(nullptr)));
	CardStruct card;
	card.r = Rank::ace;
	card.s = Suit::spades;

	//cout<<toString(card)<<'\n';
	//cout << toStringShort(card);
	//Card kort = Card(Suit::clubs, Rank::five);
	//cout<<kort.toStringShortCard();
	//CardDeck kortstokk = CardDeck();
	//kortstokk.printShort();
	//kortstokk.shuffle();
	//cout << '\n';
	//kortstokk.printShort();
	//// Your code here
	blackjack();
	return 0;
}	