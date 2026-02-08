#include "Game.h"

#include <limits>
#include <iostream>
#include <format>
#include <stdexcept>
#include <algorithm>


void Game::teamPrint() {
    cout << "                                               Welcome to NFL Sim 25-26! \n" << "                                          Please select your team to continue!" << endl;
    cout << "********************************************************************************************************************** " << endl;
    cout << "*       NFC NORTH         * *          NFC SOUTH        * *         NFC WEST          * *          NFC EAST          * " << endl;
    cout << "* (1) CHICAGO BEARS       * * (9)  CAROLINA PANTHERS    * * (17) SAN FRANCISCO 49ERS  * * (25) PHILADELPHIA EAGLES   * " << endl;
    cout << "* (2) GREEN BAY PACKERS   * * (10) ATLANTA FALCONS      * * (18) LOS ANGELES RAMS     * * (26) WASHINGTON COMMANDERS * " << endl;
    cout << "* (3) MINNESOTA VIKINGS   * * (11) TAMPA BAY BUCCANEERS * * (19) ARIZONA CARDINALS    * * (27) DALLAS COWBOYS        * " << endl;
    cout << "* (4) DETROIT LIONS       * * (12) NEW ORLEANS SAINTS   * * (20) SEATTLE SEAHAWKS     * * (28) NEW YORK GIANTS       * " << endl;
    cout << "********************************************************************************************************************** " << endl;
    cout << "*       AFC NORTH         * *          AFC SOUTH        * *        AFC WEST           * *          AFC EAST          * " << endl;
    cout << "* (5) PITTSBURGH STEELERS * * (13) INDIANAPOLIS COLTS   * * (21) DENVER BRONCOS       * * (29) BUFFALO BILLS         * " << endl;
    cout << "* (6) CINCINNATI BENGALS  * * (14) JACKSONVILLE JAGUARS * * (22) LAS VEGAS RAIDERS    * * (30) NEW YORK JETS         * " << endl;
    cout << "* (7) BALTIMORE RAVENS    * * (15) HOUSTON TEXANS       * * (23) LOS ANGELES CHARGERS * * (31) MIAMI DOLPHINS        * " << endl;
    cout << "* (8) CLEVELAND BROWNS    * * (16) TENNESSEE TITANS     * * (24) KANSAS CITY CHIEFS   * * (32) NEW ENGLAND PATRIOTS  * " << endl;
    cout << "********************************************************************************************************************** " << endl;

};

void Game::chooseTeam(int index) {
    
    std::cout << "DEBUG: League team at index " << index << " is named: " 
              << league.TeamList.at(index).getName() << std::endl;

    currentTeam = &league.TeamList.at(index);

    std::cout << "DEBUG: currentTeam pointer now points to: " 
              << currentTeam->getName() << std::endl;
};


void Game::createGame() {
    teamPrint();
    
    bool teamNotSelected = true;
    while (teamNotSelected)
    {
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            //currentTeam = Team("Chicago Bears", "NFC", "North");
            chooseTeam(0);
            teamNotSelected = false;
            break;
        case 2:
            chooseTeam(1);
            teamNotSelected = false;    
            break;
        case 3:
            chooseTeam(2);
            teamNotSelected = false;
            break;
        case 4:
            chooseTeam(3);
            teamNotSelected = false;
            break;
        case 5:
            chooseTeam(4);
            teamNotSelected = false;
            break;
        case 6:
            chooseTeam(5);
            teamNotSelected = false;
            break;
        case 7:
            chooseTeam(6);
            teamNotSelected = false;
            break;
        case 8:
            chooseTeam(7);
            teamNotSelected = false;
            break;
        case 9:
            chooseTeam(8);
            teamNotSelected = false;
            break;
        case 10:
            chooseTeam(9);
            teamNotSelected = false;
            break;
        case 11:
            chooseTeam(10);
            teamNotSelected = false;
            break;
        case 12:
            chooseTeam(11);
            teamNotSelected = false;
            break;
        case 13:
            chooseTeam(12);
            teamNotSelected = false;
            break;
        case 14:
            chooseTeam(13);
            teamNotSelected = false;
            break;
        case 15:
            chooseTeam(14);
            teamNotSelected = false;
            break;
        case 16:
            chooseTeam(15);
            teamNotSelected = false;
            break;
        case 17:
            chooseTeam(16);
            break;
        case 18:
            chooseTeam(17);
            teamNotSelected = false;
            break;
        case 19:
            chooseTeam(18);
            teamNotSelected = false;
            break;
        case 20:
            chooseTeam(19);
            teamNotSelected = false;
            break;
        case 21:
            chooseTeam(20);
            teamNotSelected = false;
            break;
        case 22:
            chooseTeam(21);
            teamNotSelected = false;
            break;
        case 23:
            chooseTeam(22);
            teamNotSelected = false;
            break;
        case 24:
            chooseTeam(23);
            teamNotSelected = false;
            break;
        case 25:
            chooseTeam(24);
            teamNotSelected = false;
            break;
        case 26:
            chooseTeam(25);
            teamNotSelected = false;
            break;
        case 27:
            chooseTeam(26);
            teamNotSelected = false;
            break;
        case 28:
            chooseTeam(27);
            teamNotSelected = false;
            break;
        case 29:
            chooseTeam(28);
            teamNotSelected = false;
            break;
        case 30:
            chooseTeam(29);
            teamNotSelected = false;
            break;
        case 31:
            chooseTeam(30);
            teamNotSelected = false;
            break;
        case 32:
            chooseTeam(31);
            teamNotSelected = false;
            break;
        default:
            cin.clear();
            // Discard invalid input from the buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, please select a correct input." << endl;
            continue;
        }
    }
};

std::vector<Team*> Game::findCommonDivision() { //precondition that currentTeam Exists
    if (currentTeam == nullptr) {
        throw std::invalid_argument("Current Team Not Defined");
    }
    std::vector<Team*> teamsInDivision;
    for (Team& t : league.TeamList) {
        //std::cout << "DEBUG: Team Being Checked: |" << i << "| " << league.TeamList.at(i).getName() << std::endl;
        if (currentTeam->printDivision() == t.printDivision() && currentTeam->printConference() == t.printConference()) {
            if (currentTeam->getName() == t.getName()) {
                teamsInDivision.push_back(&t);
                continue;
            }
            std::cout << "DEBUG: Team In Division: " << t.getName() << std::endl;
            teamsInDivision.push_back(&t);
        }
    }
    return teamsInDivision;
}

std::vector<Team*> Game::findCommonConference() { //precondition that currentTeam Exists
    if (currentTeam == nullptr) {
        throw std::invalid_argument("Current Team Not Defined");
    }
    std::vector<Team*> teamsInConference;
    for (Team& t : league.TeamList) {
        if (currentTeam->printConference() == t.printConference()) {
            if (currentTeam->getName() == t.getName()) {
                teamsInConference.push_back(&t);
                continue;
            }
            std::cout << "DEBUG: Team In Conference: " << t.getName() << std::endl;
            teamsInConference.push_back(&t);
        }
    }
    return teamsInConference;
}

bool comparebyWINPCT(const Team* a, const Team* b) {
    if (!a || !b) return false;
    return a->getWINPCT() < b->getWINPCT();
}


void Game::runGame() {
    if (currentTeam != nullptr) {
        string currentTeamName = currentTeam->getName();
        cout << currentTeamName << endl;
        //std::cout << "Welcome to NFL Sim, " << user->getName() << ", you are now the General Manager of the " << user->getTeam() << "!" << std::endl; 
        int option;
        bool gameSimmed = false;
        bool seasonSimmed = false;
        string formattedCurrentTeamString = std::format("{:^128}", currentTeamName);
        string standingsString = std::format("{:<53}", currentTeam->printConference() + " " + currentTeam->printDivision() + " Standings");
        
        vector<Team*> teamsInDivision = findCommonDivision();
        vector<Team*> teamsInConference = findCommonConference();

        std::cout << endl;

        for (int i = 0; i < 23; i++) {
            std::cout << currentTeam->getNameOfPlayerAtIndex(i) << endl;
        }

        string bestPlayerOVR = std::format("{:^3}",std::to_string(currentTeam->getBestPlayerOVR()));

        
        
        std::cout << endl;
        //std::cout << comparebyWINPCT(teamsInDivision.at(1), teamsInDivision.at(2)) << endl;
        std::sort(teamsInDivision.begin(), teamsInDivision.end(), comparebyWINPCT);

        string firstInCurrentTeamDivision = std::format("{:^22}", teamsInDivision.at(0)->getName());
        string secondInCurrentTeamDivision = std::format("{:^22}", teamsInDivision.at(1)->getName());
        string thirdInCurrentTeamDivision = std::format("{:^22}", teamsInDivision.at(2)->getName());
        string fourthInCurrentTeamDivision = std::format("{:^22}", teamsInDivision.at(3)->getName());
        
        string firstTeamInfo = teamsInDivision.at(0)->getSeasonWin() 
                                + " - " + 
                                teamsInDivision.at(0)->getSeasonLoss() 
                                +  " - " 
                                + teamsInDivision.at(0)->getSeasonLoss() 
                                + " | W8 |  |";
        string secondTeamInfo = teamsInDivision.at(1)->getSeasonWin() 
                                + " - " + 
                                teamsInDivision.at(1)->getSeasonLoss() 
                                +  " - " 
                                + teamsInDivision.at(1)->getSeasonLoss() 
                                + " | W8 |  |";
        string thirdTeamInfo = teamsInDivision.at(2)->getSeasonWin() 
                                + " - " + 
                                teamsInDivision.at(2)->getSeasonLoss() 
                                +  " - " 
                                + teamsInDivision.at(2)->getSeasonLoss() 
                                + " | W8 |  |";
        string fourthTeamInfo = teamsInDivision.at(3)->getSeasonWin() 
                                + " - " + 
                                teamsInDivision.at(3)->getSeasonLoss() 
                                +  " - " 
                                + teamsInDivision.at(3)->getSeasonLoss() 
                                + " | W8 |  |";

        string firstTeamInfoFormatted = 
            std::format("{:^22}", firstTeamInfo);
        string secondTeamInfoFormatted = 
            std::format("{:^22}", secondTeamInfo);
        string thirdTeamInfoFormatted = 
            std::format("{:^22}", thirdTeamInfo);
        string fourthTeamInfoFormatted = 
            std::format("{:^22}", fourthTeamInfo);

        //while (!gameSimmed || !seasonSimmed) {
            std::cout << "*--------------------------------------------------------------------------------------------------------------------------------*" << endl;
            std::cout << "*" << formattedCurrentTeamString << "*" << endl;
            std::cout << "*                   XX         XX       XXXXXXXXX        XX        XXXXXXXXXX     XXXXXXXXXX     XXX    XXX ©                    *" << endl;
            std::cout << "*                  XX XX      XX       XX              XXX         X                  XX         XX X  X XX                      *" << endl;
            std::cout << "*                 XX   XX    XX        XXXXXXXXX      XX           XXXXXXXXXX         XX         XX  XX  XX                      *" << endl;
            std::cout << "*                 X      XX  X        X              XX                     X         XX         XX      XX                      *" << endl;
            std::cout << "*                X        XXX        XX             XXXXXXXXXXX    XXXXXXXXXX     XXXXXXXXXX     XX      XX                      *" << endl;
            std::cout << "*                                                           2025-26                                                              *" << endl;
            std::cout << "*                                                                                                                                *" << endl;
            std::cout << "*   " << standingsString << "(Best Player Name) Stats:       (Second Best Player Name) Stats:        *" << endl;
            std::cout << "*   ----------------------------------------------       -------------------------       ------------------------                *" << endl;
            std::cout << "*   |" << firstInCurrentTeamDivision << "| " << firstTeamInfoFormatted << "       |           Stat 1      |       |           Stat 1      |               *" << endl;
            std::cout << "*   |" << in_1st_division << "| " <<  << "       |           Stat 1      |       |           Stat 1      |               *" << endl;
            std::cout << "*   |" << secondInCurrentTeamDivision  << "| " << firstTeamInfoFormatted << "       |" << bestPlayerOVR << "              OVR      |       |   OVR        OVR      |               *" << endl;
            std::cout << "*   |" << thirdInCurrentTeamDivision  << "| " << firstTeamInfoFormatted << "       |           Stat 2      |       |           Stat 2      |               *" << endl;
            std::cout << "*   |" << fourthInCurrentTeamDivision  << "| " << firstTeamInfoFormatted << "       | Age:         OVR      |       | Age:         OVR      |               *" << endl; 
            std::cout << "*   ----------------------------------------------       | #1 Stat:  Stat 3      |       | #1 Stat:  Stat 3      |               *" << endl;
            std::cout << "*   |     View Schedule, Conference, League,     |       |              OVR      |       |              OVR      |               *" << endl;
            std::cout << "*   |     Playoff Picture and Draft Order (W)    |       |                       |       |                       |               *" << endl;
            std::cout << "*   ----------------------------------------------       -------------------------       -------------------------               *" << endl;
            std::cout << "*                                   ---------------------------------------------------------------------------------------      *" << endl;
            std::cout << "*   -------------------------       |  (Last Game)   Week 13      Location     |  (Next Game)   Week 14                   |      *" << endl;
            std::cout << "*   | Offensive OVR:        |       | 98 OVR Bears      vs.    Packers  98 OVR |      Bears       vs.      Packers        |      *" << endl;
            std::cout << "*   | Defensive OVR:        |       |         31                24             |               Location                   |      *" << endl;
            std::cout << "*   -------------------------       | (Best Player Stats Here)                 |   Team OVR               Team OVR        |      *" << endl;
            std::cout << "*                                   ---------------------------------------------------------------------------------------      *" << endl;
            std::cout << "*  Tip: (Insert help sentence here                                                                                               *" << endl;
            std::cout << "*     ---------------------------   ---------------------------   ---------------------------   ---------------------------      *" << endl;
            std::cout << "*     |                         |   |                         |   |                         |   |    Sim to next Week     |      *" << endl;
            std::cout << "*     |     View Rosters (A)    |   |     Trade Center (S)    |   |     Hall of Fame (D)    |   |     or next Season      |      *" << endl;
            std::cout << "*     |                         |   |                         |   |                         |   |           (Q)           |      *" << endl;
            std::cout << "*     ---------------------------   ---------------------------   ---------------------------   ---------------------------      *" << endl;
            std::cout << "*" << formattedCurrentTeamString << "*" << endl;
            std::cout << "*--------------------------------------------------------------------------------------------------------------------------------*" << endl;
        //}
    }
};
