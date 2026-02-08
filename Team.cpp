#include "Team.h"

#include <iostream>

void Team::generateInitialRandomTeamRoster() {
    // 1. Fill the roster with positions - 1 QB, 3 WR, 1 RB, 1 TE, 5 OL (11 Offense) - 2 CB, 2 S, 2 DE, 2 DT, 3 LB (11 Defense), 1 Kicker, 23 Total players
    teamRoster.clear();
    teamRoster.reserve(23);
    teamRoster.push_back(std::make_unique<Quarterback>()); //1
    teamRoster.push_back(std::make_unique<WideReceiver>()); //2
    teamRoster.push_back(std::make_unique<WideReceiver>()); //3
    teamRoster.push_back(std::make_unique<WideReceiver>()); //4
    teamRoster.push_back(std::make_unique<RunningBack>());  //5
    teamRoster.push_back(std::make_unique<TightEnd>()); //6
    teamRoster.push_back(std::make_unique<OffensiveLineman>()); //7
    teamRoster.push_back(std::make_unique<OffensiveLineman>()); //8
    teamRoster.push_back(std::make_unique<OffensiveLineman>()); //9
    teamRoster.push_back(std::make_unique<OffensiveLineman>()); //10
    teamRoster.push_back(std::make_unique<OffensiveLineman>()); //11
    teamRoster.push_back(std::make_unique<Cornerback>()); //12
    teamRoster.push_back(std::make_unique<Cornerback>()); //13
    teamRoster.push_back(std::make_unique<Safety>()); //14
    teamRoster.push_back(std::make_unique<Safety>()); //15
    teamRoster.push_back(std::make_unique<DefensiveEnd>()); //16
    teamRoster.push_back(std::make_unique<DefensiveEnd>()); //17
    teamRoster.push_back(std::make_unique<DefensiveTackle>()); //18
    teamRoster.push_back(std::make_unique<DefensiveTackle>()); //19
    teamRoster.push_back(std::make_unique<Linebacker>()); //20
    teamRoster.push_back(std::make_unique<Linebacker>()); //21
    teamRoster.push_back(std::make_unique<Linebacker>()); //22
    teamRoster.push_back(std::make_unique<Kicker>()); //23

    // 2. Helper function to load names into a vector (to avoid repeating code)
    auto loadNames = [](std::string filename) {
        std::vector<std::string> names;
        std::ifstream file(filename);
        std::string line;
        // Skip header if necessary
        std::getline(file, line); 
        while (std::getline(file, line)) {
            if (line[line.length() - 1] == '\r') {
                line.pop_back();
            }
            if(!line.empty()) names.push_back(line);
        }
        return names;
    };

    std::vector<std::string> firstNames = loadNames("NFL_Common_First_Names.csv");
    std::vector<std::string> lastNames = loadNames("NFL_Common_Last_Names.csv");

    // 3. Assign names randomly from the loaded vectors
    std::srand(std::time(0));
    for (auto& player : teamRoster) {
        if (!firstNames.empty()) {
            player->setFirstName(firstNames[std::rand() % firstNames.size()]);
        }
        if (!lastNames.empty()) {
            player->setLastName(lastNames[std::rand() % lastNames.size()]);
        }
    }
}
