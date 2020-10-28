#include "Blackjack.h"

BlackJack::BlackJack() {
	kortstokk = CardDeck();
	kortstokk.shuffle();
	playersHand.push_back(kortstokk.drawCard());
	dealersHand.push_back(kortstokk.drawCard());
	playersHand.push_back(kortstokk.drawCard());
	dealersHand.push_back(kortstokk.drawCard());
}

void BlackJack::drawCardPlayer() {
	playersHand.push_back(kortstokk.drawCard());
}

void BlackJack::drawCardDealer() {
	dealersHand.push_back(kortstokk.drawCard());
}

int BlackJack::dealersHandScore() {
	int ess = 0;
	int score = 0;
	for (int i = 0; i < dealersHand.size(); ++i) {
		Rank kort = dealersHand[i].rank();
		if (kort == Rank::ace) {
			++ess;
		}
		else {
			score += rankToIntmap.at(kort);
		}
	}
	if (ess > 0) {
		for (int i = 0; i < ess; ++i) {
			if (score > 10) {
				++score;
			}
			if (score <= 10) {
				score += 11;
			}
		}
		return score;
	}
	else {
		return score;
	}
}

int BlackJack::playersHandScore() {
	int ess = 0;
	int score = 0;
	for (int i = 0; i < playersHand.size(); ++i) {
		Rank kort = playersHand[i].rank();
		if (kort == Rank::ace) {
			++ess;
		}
		else {
			score += rankToIntmap.at(kort);
		}
	}
	if (ess > 0) {
		for (int i = 0; i < ess; ++i) {
			if (score > 10) {
				++score;
			}
			if (score <= 10) {
				score += 11;
			}
		}
		return score;
	}
	else {
		return score;
	}
}

void BlackJack::printDealersHand() {
	for (int i = 1; i < dealersHand.size(); ++i) {
		cout << dealersHand[i].toStringShortCard() << " , ";
	}
	cout << '\n';
}

void BlackJack::printPlayersHand() {
	for (int i = 0; i < playersHand.size(); ++i) {
		cout << playersHand[i].toStringShortCard() << " , ";
	}
	cout << '\n';
}


void blackjack() {
	char othergame = 'y';
	while (othergame != 'n') {
	BlackJack spill = BlackJack();
		int playerscore = 0;
		int dealerscore = 0;
		char input = 'y';
		while (input!='n' and playerscore<21) {
			cout << "Dealers hand: \n";
			spill.printDealersHand();
			cout << "Your hand:\n";
			spill.printPlayersHand();
			playerscore = spill.playersHandScore();
			dealerscore = spill.dealersHandScore();
			//cout << playerscore << ' ' << dealerscore;
			cout << "Do you want an other card? (y/n): ";
			cin >> input;
			if (input == 'y') {
				spill.drawCardPlayer();
				playerscore = spill.playersHandScore();
			}
			if (dealerscore < 17) {
				spill.drawCardDealer();
				dealerscore = spill.dealersHandScore();
			}
			if (dealerscore >= 17 and input=='n') {
				break;
			}
		}
		if (dealerscore <= 21 and playerscore <= 21) {
			if (playerscore > dealerscore) {
				cout << "You won the game."<<"You got " <<playerscore<< " and the dealer got " <<dealerscore<< ".\n";

			}

			if (dealerscore > playerscore) {
				cout << "The dealer won the game."<<"You got " <<playerscore<< " and the dealer got " <<dealerscore<< ".\n";
			}
			if (playerscore == dealerscore) {
				cout << "It is a draw.\n";
			}
		}
		else {
			if (dealerscore > 21) {
				cout << "You won the game, the dealer got more than 21.\n";
			}
			else {
				cout << "You lost the game.\n";
			}
		}
		cout << "Do you want to play another game (y/n): ";
		cin >> othergame;
	}
}