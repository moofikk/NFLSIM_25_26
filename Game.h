#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <fstream>

#include "League.h"
#include "User.h"

using namespace std;

class Game {
    
private:
    bool gameResetRequest = false;
public:
    League league;
    Team* currentTeam;

    Game() : currentTeam(nullptr) {
        // Now currentTeam is safely bound to startingTeam
    }
    
    void chooseTeam(int index);
    //vector<Team> teamList = league.getTeamList();
    void teamPrint();
    
    void printCurrentTeam();
    void createGame(); //Creates a new league object
    void showMainMenu();
    void runGame(); //Uses the league object created in createGame to run the Game.
    bool resetRequest(); //Checks if the user wants to reset the game after a season ends.
    std::vector<Team*> findCommonDivision();
    std::vector<Team*> findCommonConference();

   
};

#endif