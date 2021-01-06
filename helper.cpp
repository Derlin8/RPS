#include "helper.h"
#define ROCK 0
#define PAPER 1
#define SCISSORS 2
// I define.. Rock = 1 , Paper = 2 , Scissor = 3 , CONTINUE = 4 , QUIT = 5  , Else = -1
int strip(string dirty){
    //Same strip algorithm used in topN() ...
    string clean;
    char blank = ' ';
    int startIndex = 0;
    int endIndex = 0;
    bool start = false;
    int lastIndex = dirty.size() - 1;
    int ptr = 0;
    //Loop pass blanks before
    while(ptr <= lastIndex){
        if(dirty[ptr] == ')' && start == false){
            clean = "bad";
            break;
        }
        if(dirty[ptr] == blank){
                ptr++;
            continue;
        }
        if(start == false && (dirty[ptr] == '(')){

                startIndex = ptr++;
                start = true;
                continue;
        }
        if(start == false && isalpha(dirty[ptr])){
                            dirty[ptr] = tolower(dirty[ptr]);
            startIndex = ptr++;
            start = true;
            continue;
        }
        if(start == true && isalpha((dirty[ptr]))){
            dirty[ptr] = tolower(dirty[ptr]);
            endIndex = ptr++;
            continue;
        }
        ptr++;
    }

    if(startIndex != 0  && endIndex == 0){
        clean = dirty.substr(startIndex,1);
    }else{
    clean = dirty.substr(startIndex,(endIndex-startIndex)+1);
    }
    //Check which one is it , Rock? Scissor? Paper? Yes? No?
    if(clean.compare("(r)ock") == 0 || clean.compare("rock") == 0 || clean.compare("r") == 0)
        return 0;
    else if(clean.compare("(p)aper") == 0 || clean.compare("paper") == 0 || clean.compare("p") == 0)
        return 1;
    else if(clean.compare("(s)cissors") == 0 || clean.compare("scissors") == 0 || clean.compare("s") == 0)
        return 2;
    else if(clean.compare("(y)es") == 0 || clean.compare("yes") == 0 || clean.compare("y") == 0)
        return 4;
    else if(clean.compare("(n)o") == 0 || clean.compare("no") == 0 || clean.compare("n") == 0)
        return 5;
    else
        return -1;
}


