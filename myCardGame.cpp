#include <iostream>
#include <ctime>
#include <string>
using namespace std;

struct card{
	int suit;
	int value;
};

card drawCard();
void saycard(card);

void saycard(card c){
	string suitname, valuename;
	switch(c.suit){
		case 0: suitname = "Hearts";break;
		case 1: suitname = "Clubs";break;
		case 2: suitname = "Diamonds";break;
		case 3: suitname = "Spades";
	}
	switch(c.value){
		case 1: valuename = "Ace";break;
		case 2: valuename = "Two";break;
		case 3: valuename = "Three";break;
		case 4: valuename = "Four";break;
		case 5: valuename = "Five";break;
		case 6: valuename = "Six";break;
		case 7: valuename = "Seven";break;
		case 8: valuename = "Eight";break;
		case 9 : valuename = "Nine";break;
		case 10: valuename = "Ten";break;
		case 11: valuename = "Jack";break;
		case 12: valuename = "Queen";break;
		case 13: valuename = "King";
	}
	cout << "The card is a " << valuename << " of " << suitname << endl;
}

card drawCard(){
	card mycard;
	bool deck[4][13];


	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			deck[i][j] = false;
		}
	}

	mycard.suit = rand() %4;
	mycard.value = rand() %13 + 1;

	
	if(deck[mycard.suit][mycard.value] == false)
		deck[mycard.suit][mycard.value] = true;
	return mycard;
}

int main(){

	card hand[5];
	card draw;
	draw = drawCard();
	for(int go = 0; go<5; go++){
	saycard(draw);
	hand[go] = draw;
	}
	return 0;
}





