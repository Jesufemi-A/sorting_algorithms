#ifndef __DECK__
#define __DECK__

#include <stdlib.h>

/**
  * enum kind_e - The kind of deck.
  * @SPADE: The Spade piece
  * @HEART: The heart piece
  * @CLUB: The Club piece
  * @DIAMOND: Diamond kind
  */

typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - The Playing card
 * @value: value of the card
 * From "Ace" to "King"
 * @kind: kind of the card
 */

typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of cards
 *
 * @card: pointing the card on the node
 * @prev: pointing to the previous node on the list
 * @next: pointing to the next node on the list
 */

typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
int main(void);

#endif /* __DECK__ */
