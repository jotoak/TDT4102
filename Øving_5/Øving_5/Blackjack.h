#pragma once
#include "Card.h"
#include "CardDeck.h"

class BlackJack {
public:
	BlackJack();
	void drawCardPlayer();
	void drawCardDealer();
	int playersHandScore();
	int dealersHandScore();
	void printDealersHand();
	void printPlayersHand();
private:
	CardDeck kortstokk;
	vector<Card> dealersHand;
	vector<Card> playersHand;
};

const map<Rank, int> rankToIntmap{
	{Rank::two,2},
{Rank::three,3},
{Rank::four,4},
{Rank::five,5},
{Rank::six,6},
{Rank::seven,7},
{Rank::eight,8},
{Rank::nine,9},
{Rank::ten,10},
{Rank::jack,10},
{Rank::queen,10},
{Rank::king,10}
};

void blackjack();