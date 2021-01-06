#include "helper.h"


int main(int argc , char** argv) {

    string userInput;
    string moves[3] = {"rock","paper","scissors"};
    int HumanFinal = -1; //Assume is wrong input for human
    int AIFinal;
    bool quit = false;
    bool tie = false;
    std::minstd_rand rng;
    if (argc < 2) {
        rng.seed(time(nullptr));
      //  srand(time(nullptr));

    }
    else{
        rng.seed(std::stoi(argv[1]));
    }
    do{
        do{
            tie = false;
            do{
                cout << "Enter (R)ock, (P)aper, or (S)cissors for your move: ";
                getline(cin,userInput);
                HumanFinal = strip(userInput);
               // cout << endl;
            }while(HumanFinal == -1);
            //Generate AI ouput
            AIFinal = getAIInput(rng);
            if(winner(HumanFinal,AIFinal) == 1) cout << "You win!" << endl;
            else if(winner(HumanFinal,AIFinal) == 0) cout << "The AI wins :(" << endl;
            else{
                cout << "You and the AI both played " << moves[AIFinal] << "." << endl;
                tie = true;
                cout << "Keep playing until someone wins." << endl;
            }
        }while(tie == true);


        HumanFinal = -1; //Reset to use for quit game indication
        do{
            cout << "Would you like to replay the game?" << endl;
            cout << "Enter (Y)es or (N)o: ";
            getline(cin,userInput);
            HumanFinal = strip(userInput);
        }while(HumanFinal == -1);
        if(HumanFinal == 5) quit = true;

    }while(quit == false);

   return 0;


}
