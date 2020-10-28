#pragma once
#include "std_lib_facilities.h"

enum class Suit {clubs, diamonds,hearts,spades};
enum class Rank{two,three,four,five,six,seven,eight,nine,ten,jack,queen,king,ace};
const map<Suit, string> suitStrings{
	{Suit::clubs,"Clubs"},
	{Suit::diamonds,"Diamonds"},
	{Suit::hearts,"Hearts"},
{	Suit::spades,"Spades"}
};

const map<Rank, string> rankStrings{
	{Rank::two,"Two"},
	{Rank::three,"Three"},
	{Rank::four,"Four"},
	{Rank::five,"Five"},
	{Rank::six,"Six"},
	{Rank::seven,"Seven"},
	{Rank::eight,"Eight"},
	{Rank::nine,"Nine"},
	{Rank::ten,"Ten"},
	{Rank::jack,"Jack"},
	{Rank::queen,"Queen"},
	{Rank::king,"King"},
	{Rank::ace,"Ace"}
};
const map<Rank, int> rankToInt{
	{Rank::two,2},
	{Rank::three,3},
	{Rank::four,4},
	{Rank::five,5},
	{Rank::six,6},
	{Rank::seven,7},
	{Rank::eight,8},
	{Rank::nine,9},
	{Rank::ten,10},
	{Rank::jack,11},
	{Rank::queen,12},
	{Rank::king,13},
	{Rank::ace,14} 
};



// Fordelen er at det er enkler å holde styr på de ulike kortene. 

struct CardStruct
{
	Suit s;
	Rank r;
};

string toString(CardStruct card);

string toStringShort(CardStruct card);

string toString(int number);

class Card {
public:
		Card();
		Card(Suit suit, Rank rank);
		Suit suit();
		Rank rank();
		bool isValid();
		string toStringCard();
		string toStringShortCard();
private:
	Suit s;
	Rank r;
	bool valid;
};
