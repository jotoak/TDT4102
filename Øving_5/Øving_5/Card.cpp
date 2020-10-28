#include "Card.h"

string toString(CardStruct card) {
	string textSuit = suitStrings.at(card.s);
	string textRank = rankStrings.at(card.r);
	return textRank + " of " + textSuit;
}

string toStringShort(CardStruct card) {
	string color = suitStrings.at(card.s);
	int value = rankToInt.at(card.r);
	string valueString = toString(value);
	return color[0] + valueString;
}

string toString(int number) {
	ostringstream os;
	os << number;
	return os.str();
}
Card::Card()
	:valid{false}
{
}

Card::Card(Suit suit, Rank rank) 
	:s{ suit }, r{ rank },valid{true}
{
}
Suit Card::suit() {
	return s;
}

Rank Card::rank() {
	return r;
}

bool Card::isValid() {
	return valid;
}

string Card::toStringCard() {
	if (valid) {
		string textSuit = suitStrings.at(s);
		string textRank = rankStrings.at(r);
		return textRank + " of " + textSuit;
	}
	else {
		return "Ugyldig kort";
	}
}

string Card::toStringShortCard() {
	if (valid) {
		string color = suitStrings.at(s);
		int value = rankToInt.at(r);
		string valueString = toString(value);
		return color[0]+valueString;
	}
else{
		return "Ugyldig kort";
	}
}