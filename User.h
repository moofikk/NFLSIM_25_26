#pragma once

#include <iostream>
#include "Team.h"

#ifndef USER_H
#define USER_H

//using namespace std;

class User { // aka General Manager
    private:
        std::string userName = "";
        Team currentTeam;
    public:
        // User() {};
        // User(string userName, Team currentTeam) {
        //     this->userName = userName;
        //     this->currentTeam = currentTeam;
        // };
        // void setName(string newName = "") {
        //     std::cout << "What would you like your new name to be?" << endl;
        //     std::cin >> newName;
        //     userName = newName;
        // };
        // void setTeam(Team newTeam) {
        //     currentTeam = newTeam;
        // };
        // // void getName() {
        // //     currentTeam = newTeam;
        // // };
        // // Team getTeam() {
        // //     return currentTeam;
        // // };
        // /// What does the general Manager do?
        // // 
        // void addPlayer(Player& player);
        // void removePlayer(Player& player); // removes a player from currentTeam


};


#endif