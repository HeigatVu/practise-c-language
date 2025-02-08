/*
Struct code
Duc
Feb 5, 2025
*/

#include <stdio.h>

// Define a struct for a playing card
struct card {
  int pips;
  char suit;
};

/* int main() { */
/*   struct card c1;       // c1 is a variable of type "struct card" */
/*   struct card c2;       // c2 and c3 are also "struct card" variables */
/*   struct card deck[52]; // deck is an array of 52 "struct card" variables */
/**/
/*   c1.pips = 1;   // set the pips value of c1 to 1 (Ac3) */
/*   c1.suit = 'H'; // Set the suit of c1 to 'H' (hearts) */
/**/
/*   deck[0].pips = 13;  // Set the pips of the first card in the deck to 13
 * (king) */
/*   deck[0].suit = 'S'; // Set the suit of the first card to 'S' (Spades) */
/**/
/*   printf("The first card is the %d of %c\n", deck[0].pips, deck[0].suit); */
/* } */

typedef enum {
  CLUBS,
  DIAMONDS,
  HEARTS,
  SPADES,
} Suit;

typedef struct {
  int pips;
  Suit suit;
} Card;

const char *print_suit_card(Card c) {
  switch (c.suit) {
  case CLUBS:
    return ("Clubs");
  case DIAMONDS:
    return ("Diamonds");
  case HEARTS:
    return ("Hearts");
  case SPADES:
    return ("Spades");
  default:
    return ("Unknown");
  }
}

int main() {
  // Method 1
  // Now you can do:
  Card c1;
  c1.pips = 10;
  c1.suit = DIAMONDS;
  Card deck[52];

  /* deck[0].pips = 13; */
  /* deck[0].suit = HEARTS; */
  deck[0] = c1;

  printf("The first card is the %d of %s\n", deck[0].pips,
         print_suit_card(deck[0]));

  // Method 2:
  Card c2;
  Card *ptr_to_card = &c2;

  ptr_to_card->pips = 11;
  ptr_to_card->suit = CLUBS;

  deck[1] = c2;
  printf("The second card is the %d of %s\n", deck[1].pips,
         print_suit_card(deck[1]));

  return 0;
}
