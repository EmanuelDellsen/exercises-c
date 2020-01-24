/*
 *  File    : nim.c 
 *  Program : Nim game
 *  Author  : ...
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>     


#define MAX_COINS 13

const int HUMAN = 0;
const int COMPUTER = 1;

/* ------------- IO --------------- */

/*
 * human_choice
 * Get human choce as an int from stdin.
 * Clears stdin.
 * in: pile
 * out: int-value in range 1-3 (and also less than pile)
 */
int human_choice(int pile);

/*
 * write_winner
 * Write winner as a string on stdout.
 * in: Values HUMAN or COMPUTER.
 * out:
 */
void write_winner( int player );

/*
 * play_again
 * Ask human if he/she wants to play
 * another round. If 'n' or 'N' selected
 * (single char) return false else true.
 * Clears stdin.
 * in: 
 * out: true or false
 */
int play_again();

/* ---------------- Logic ----------------*/

/*
 * computer_choice 
 * Get computers choice (including some AI,
 * if 4 coins or less left, function makes a 
 * smart choice else random).
 * in: pile
 * out: int-value in range 1-3 (and also less than pile)
 */
int computer_choice(int pile);

/*
 * toggle
 * Switches player, if HUMAN in COMPUTER out
 * etc.
 * in:  actual player
 * out: next player
 */
int toggle( int player );

/* --------------------- Utilities -------------*/
void clear_stdin();

/***************************************************
 *
 *    MAIN
 *
 ***************************************************/
int main()
{
  int pile,			/* This is how many coins we have */
    player,			/* Who is playing? */
    n_coins;			/* Number of coins taken */
  
  srand( time(0) );		/* Setup random */

  printf("Welcome to NIM by ...");
 
 
  
  pile = MAX_COINS;		/* Set start values (= init) */
  player = HUMAN;

  /* 
   *  Program main loop 
   */
  while( true ) {	

    printf("There are %d  coins in the pile \n", pile );
    
    if( player == HUMAN ){
      n_coins = human_choice(pile);      
    }else{
      n_coins = computer_choice(pile);
      printf("- Me, the computer, took %d\n", n_coins);      
    }
    pile -= n_coins;
    player = toggle( player );
      
    if( pile <= 1 ){
      break;
    }
  }
  /*
   * end main loop
   */
   
  write_winner( player );   

 
  printf("Finished\n");

  return 0;
}

/******************************************************
 *
 *  DEFINITIONS
 * 
 ******************************************************/


void clear_stdin()
{
  while( getchar() != '\n' ){
    ;
  }
}

int human_choice(int pile)
{

    /* int coinsTaken = 0;

    coinsTaken = getchar();

    if(coinsTaken == '1' || '2' || '3' && coinsTaken <= pile){

return coinsTaken;
    } else {
        return 0;
    }
     */

}

int computer_choice(int pile)
{

}

void write_winner(int player )
{
    if(player == HUMAN){
        printf("And the winner is you! ");
    }
    if(player == COMPUTER){
        printf("The computer AI defeated you, better luck next time!");
    }

}

int play_again()
{

}

int toggle( int player )
{

}
