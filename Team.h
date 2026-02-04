#pragma once

#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>

#include "Positions.h"



//using namespace std;

class Team {
private:
    std::string name = "";
    int playerAmount = 23;
    std::string division = "";
    std::string conference = "";
    int offensiveOVR = 0;
    int defensiveOVR = 0;
    int careerWins;
    int careerLosses;
    float careerTies;
    int seasonWins;
    int seasonLosses;
    float seasonTies;
    float winPCT;
    
public:
    // Disable copying 

    // Allow moving
    std::vector<std::unique_ptr<Player>> teamRoster;

    // IMPORTANT: unique_ptr makes Team non-copyable. 
    // Explicitly delete the copy constructor
    Team(const Team&) = delete;
    Team& operator=(const Team&) = delete;

    // Allow moving so the League's vector can resize
    Team(Team&&) = default;
    Team& operator=(Team&&) = default;

    Team() {
        this->name = name;
        this->playerAmount = playerAmount;
        this->division = division;
        this->conference = conference;

    };

    Team(std::string name, std::string conference, std::string division) : teamRoster(playerAmount) {
        this->name = name;
        this->playerAmount = playerAmount;
        this->division = division;
        this->conference = conference;

        seasonWins = 0;
        seasonLosses = 0;
        seasonTies = 0;
        winPCT = 0.0f; /// 9 + .5 / 17 // seasonWins + (seasonTies * 0.5) / (seasonWins + seasonLosses + seasonTies)
        generateInitialRandomTeamRoster();

    };

    void addSeasonWin() {
        seasonWins += 1;
        careerWins += 1;
    }

    void addSeasonLoss() {
        seasonLosses += 1;
        careerLosses += 1;
    }

    void addSeasonTie() {
        seasonTies += 1;
        careerTies += 1;
    }

    int getSeasonWin() const {
        return seasonWins;
    }

    int getSeasonLoss() const {
        return seasonLosses;
    }

    int getSeasonTies() const {
        return seasonTies;
    }

    float getWINPCT() const {
        return winPCT;
    }
    
    void setDivision(std::string newDivision) {
        division = newDivision;
    }


    std::string printDivision() const{
        return division;
    }

    std::string printConference() const {
        return conference;
    }

    
    std::string getName() const {  
        return name; 
    };

    std::string getNameOfPlayerAtIndex(int index) {
        return teamRoster.at(index)->getName();
    }

    void viewSchedule() {
        // for (TeamGame weekGame : seasonSchedule) {
        //     weekGame.printInfo();
        // }
    };

    int getBestPlayerOVR() {
        int max = teamRoster.at(0)->getOVR();
        for (int i = 1; i < teamRoster.size(); i++) {
            if (teamRoster.at(i)->getOVR() > max) {
                max = teamRoster.at(i)->getOVR();
            }
        }
        return max;
    }

    void addPlayer(std::unique_ptr<Player> player) { // void addPlayer (Player* player) but this is a unique ptr so it performs automatic deletion
        
        
        //teamRoster.push_back(std::move(player)); 
        //have to std::move the unique ptr object because unique_ptr is a move_only type, meaning  one pointer can manage the underlying resource at any given time
        //std::move doesn't actually move the data, it is a cast that converts its argument into an rvalue reference. 
        // This signals to the compiler that the original object can be treated as an "expiring value" whose resources can be safely pilfered 

    }


    // void clearRoster () {
    //     for (int i = 0; i < teamRoster.size(); i++) {
    //         Player* raw_player_ptr = teamRoster.at(i).release();
    //         delete raw_player_ptr;
    //     }
    // }

    void generateInitialRandomTeamRoster();


    // Team will only be for getter methods
};

#endif