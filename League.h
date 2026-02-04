//League is the league instance created during the beginning of each game - It creates matchups and schedules for each Team object... (TODO - ADD MORE FUNCTIONALITIES FOR LEAGUE)

#ifndef LEAGUE_H
#define LEAGUE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "Team.h"


class League {

    public:
        std::vector<Team> TeamList;
        League() {
            TeamList.reserve(32);
            TeamList.emplace_back("Chicago Bears", "NFC", "North"); //1
            TeamList.emplace_back("Green Bay Packers", "NFC", "North"); //2
            TeamList.emplace_back("Minnesota Vikings", "NFC", "North"); //3
            TeamList.emplace_back("Detroit Lions", "NFC", "North"); //4
            TeamList.emplace_back("Pittsburgh Steelers", "AFC", "North"); //5
            TeamList.emplace_back("Cincinnati Bengals", "AFC", "North"); //6
            TeamList.emplace_back("Baltimore Ravens", "AFC", "North"); //7
            TeamList.emplace_back("Cleveland Browns", "AFC", "North"); //8
            TeamList.emplace_back("Carolina Panthers", "NFC", "South"); //9
            TeamList.emplace_back("Atlanta Falcons", "NFC", "South"); //10
            TeamList.emplace_back("Tampa Bay Buccaneers", "NFC", "South"); //11
            TeamList.emplace_back("New Orleans Saints", "NFC", "South"); //12
            TeamList.emplace_back("Indianapolis Colts", "AFC", "South"); //13
            TeamList.emplace_back("Jacksonville Jaguars", "AFC", "South"); //14
            TeamList.emplace_back("Houston Texans", "AFC", "South"); //15
            TeamList.emplace_back("Tennessee Titans", "AFC", "South"); //16
            TeamList.emplace_back("San Francisco 49ers", "NFC", "West"); //17
            TeamList.emplace_back("Los Angeles Rams", "NFC", "West"); //18
            TeamList.emplace_back("Arizona Cardinals", "NFC", "West"); //19
            TeamList.emplace_back("Seattle Seahawks", "NFC", "West"); //20
            TeamList.emplace_back("Denver Broncos", "AFC", "West"); //21
            TeamList.emplace_back("Las Vegas Raiders", "AFC", "West"); //22
            TeamList.emplace_back("Los Angeles Chargers", "AFC", "West"); //23 
            TeamList.emplace_back("Kansas City Chiefs", "AFC", "West"); //24
            TeamList.emplace_back("Philadelpia Eagles", "NFC", "East"); //25
            TeamList.emplace_back("Washington Commanders", "NFC", "East"); //26
            TeamList.emplace_back("Dallas Cowboys", "NFC", "East"); //27
            TeamList.emplace_back("New York Giants", "NFC", "East"); //28
            TeamList.emplace_back("Buffalo Bills", "AFC", "East"); //29
            TeamList.emplace_back("New York Jets", "AFC", "East"); //30
            TeamList.emplace_back("Miami Dolphins", "AFC", "East"); //31
            TeamList.emplace_back("New England Patriots", "AFC", "East"); //32
        }; 

        
        const std::vector<Team>& getTeamList() const {
            return TeamList;
        }
        
        

    
};

#endif