//
// Created by Derek Lin on 10/30/19.
//

#include "getAI.h"

//Get AI input
int getAIInput(minstd_rand &gen){
    uniform_int_distribution<int> g(0,2);
    int ans  = g(gen); //Generate random input for AI
    if(ans == 0) cout << "The ai played rock." << endl;
    else if(ans == 1) cout << "The ai played paper." << endl;
    else cout << "The ai played scissors." << endl;
    return ans;
}
