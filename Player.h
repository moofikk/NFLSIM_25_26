// Defines an actual player in the NFL, not the player currently playing the game

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>

class Player {
    private:
        std::string firstName = "";
        std::string lastName = "";
        std::string college = "";
        int height = 0;
        int weight = 0;
        int age = 0;
        int draftRound = 0;
        int draftNumber = 0;
        

    public:
        int stamina = 0;
        
        virtual void create() = 0;
        virtual int getOVR() = 0;
        Player() {}

        void setFirstName(const std::string& newFirstName) {
            firstName = newFirstName;
        }

        void setLastName(const std::string& newLastName) {
            lastName = newLastName;
        }

        std::string getName() const {
            return firstName + " " + lastName;
        }

        int getStamina() { return stamina; }

        void setStamina(int newStamina) { stamina = newStamina; }


        virtual ~Player() {}

    protected:
    // Protected constructor to prevent direct instantiation of Player
    Player(const std::string& initialName) : firstName(initialName) {}

    
};

#endif