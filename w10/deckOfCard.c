#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const int DECK_SIZE   = 52;
const int RANK_SIZE   = 13;
const int STR_SIZE    = 10;
const int THREE_FACES = 10;

typedef struct {
    unsigned char rank;       // 1 to 13
    unsigned char suit;       // 1 to 4
    int score;
} cardtype;

typedef struct {
    unsigned char id;
    cardtype cards[3];
} playertype;

char *ranktostr(unsigned char rank, char *str) {
    char *ranknames[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    strcpy(str, ranknames[rank - 1]);
    return str;
}

char *suittostr(unsigned char suit, char *str) {
    char *suitnames[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    strcpy(str, suitnames[suit - 1]);
    return str;
}

void initdeck(cardtype cards[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        cards[i].rank = i % RANK_SIZE + 1;
        cards[i].suit = i / RANK_SIZE + 1;
    }
}

void printdeck(cardtype cards[]) {
    char strrank[STR_SIZE], strsuit[STR_SIZE];
    for (int i = 0; i < DECK_SIZE; i++) {
        printf("%s of %s\n", ranktostr(cards[i].rank, strrank), 
                             suittostr(cards[i].suit, strsuit));
    }
}

void swap(cardtype cards[], int i, int j) {
    cardtype tmp = cards[i];
    cards[i] = cards[j];
    cards[j] = tmp;
}

void shuffledeck(cardtype cards[]) {
    srand(time(NULL));
    for (int times = 1; times <= 5; times++) {
        for (int i = 0; i < DECK_SIZE; i++) {
            int j = rand() % DECK_SIZE;
            swap(cards, i, j);
        }
    } 
}

void dealgame(cardtype cards[], playertype players[]) {
    for (int i = 0; i < 2; i++) {
        players[i].id = i + 1;
        for (int j = 0; j < 3; j++) {
            players[i].cards[j] = cards[i + 2 * j]; // players[0] gets cards[0], cards[2], cards[4]
        }                                           // players[1] gets cards[1], cards[3], cards[5]
    }
}

int points(playertype player) {
    if (player.cards[0].rank > 10 && player.cards[1].rank > 10
                                  && player.cards[2].rank > 10) {
        return THREE_FACES;
    }
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += (player.cards[i].rank > 10)? 0 : player.cards[i].rank;
    }
    return total % 10;
}

void printgame(playertype players[]) {
    char strrank[STR_SIZE], strsuit[STR_SIZE];
    for (int i = 0; i < 2; i++) {
        // Print player and his/her cards
        printf("Player %d:\n", players[i].id);
        for (int j = 0; j < 3; j++) {
            printf("%s of %s\n", ranktostr(players[i].cards[j].rank, strrank), 
                                 suittostr(players[i].cards[j].suit, strsuit));
        }

        // Print points  
        int pts = points(players[i]);
        if (pts == 10) {
            printf("=> 3 faces\n\n");
        } else {
            printf("=> %d point", pts);
            if (pts != 1) printf("s");
            printf("\n\n");
        }
    }
}

void printresult(playertype players[]) {
    int pts1 = points(players[0]), pts2 = points(players[1]);
    if (pts1 > pts2) {
        printf("Player 1 wins!\n");
    } else if (pts1 < pts2) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a draw!\n");
    }
}

int main() {
    cardtype cards[DECK_SIZE];
    initdeck(cards);
    shuffledeck(cards);
    printdeck(cards);

    playertype players[2];
    dealgame(cards, players);
    printgame(players);
    printresult(players);

    return 0;
}
 


