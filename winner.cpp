//
// Created by Derek Lin on 10/30/19.
//

#include "winner.h"

//Return 1 if human win , 0 if AI win ,  -1 if tie
int winner(int human , int AI){
    if(human == ROCK && AI == SCISSORS) return 1;
    if(human == ROCK && AI == PAPER) return 0;
    if(human == PAPER && AI == ROCK) return 1;
    if(human == PAPER && AI == SCISSORS) return 0;
    if(human == SCISSORS && AI == PAPER) return  1;
    if(human == SCISSORS && AI == ROCK) return 0;
    return -1;//TIE
}
