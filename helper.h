#pragma once
#include <iostream>
#include <cctype>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <random>

using namespace std;


int strip(string dirty);
int winner(int human , int AI);
int getAIInput(minstd_rand &gen);
