#ifndef POSITIONS_H
#define POSITIONS_H

#include "Player.h"

class Quarterback : public Player {
    private:
        int throwPowerOVR = 0;
        int throwAccuracyOVR = 0;
        int runningSpeedOVR = 0;
        float throwPowerWeight = .45;
        float throwAccuracyWeight = .65;
        float runningSpeedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;

    public:
        Quarterback() {
            std::srand(std::time(0));
            throwPowerOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            throwAccuracyOVR = rand() % (99 - 70 + 1) + 70;
            runningSpeedOVR = rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (throwPowerOVR * throwPowerWeight) + (throwAccuracyOVR * throwAccuracyWeight) + (runningSpeedOVR * runningSpeedWeight) + (stamina * staminaWeight) + baseOVR;
        };

        int getThrowPowerOVR() { return throwPowerOVR; }
        int getThrowAccuracyOVR() { return throwPowerOVR; }
        int getRunningSpeedOVR() { return runningSpeedOVR; }

        void setThrowPowerOVR(int newThrowPower) { throwPowerOVR = newThrowPower; }
        void setThrowAccuracyOVR(int newThrowAccuracy) { throwAccuracyOVR = newThrowAccuracy; }
        void setRunningSpeedOVR(int newRunningSpeed) { runningSpeedOVR = newRunningSpeed; }
        
        int getOVR() override { return OVR; } 


        // Implement virtual methods from Player
        virtual ~Quarterback() {}
        void create() override { /* QB specific logic */ }
};

class WideReceiver : public Player {
    private:
        int catchingOVR = 0;
        int strengthOVR = 0;
        int speedAgilityOVR = 0;
        float catchingWeight = .45;
        float strengthWeight = .65;
        float speedAgilityWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;

    public:
        WideReceiver() {
            std::srand(std::time(0));
            catchingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            speedAgilityOVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (catchingOVR * catchingWeight) + (strengthOVR * strengthWeight) + (speedAgilityOVR * speedAgilityWeight) + (stamina * staminaWeight) + baseOVR;
        };

        int getCatchingOVR() { return catchingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedAgilityOVR() { return speedAgilityOVR; }

        void setCatching(int newCatching) { catchingOVR = newCatching; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeedAgility(int newSpeedAgility) { speedAgilityOVR = newSpeedAgility; }
        
        int getOVR() override { return OVR; } 
        virtual ~WideReceiver() {}
        void create() override { /* WR specific logic */ }
};

class RunningBack : public Player {
    private:
        int rushingOVR = 0;
        int strengthOVR = 0;
        int speedOVR = 0;
        float rushingWeight = .45;
        float strengthWeight = .65;
        float speedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;

    public:
        RunningBack() {
            std::srand(std::time(0));
            rushingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            speedOVR = rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (rushingOVR * rushingWeight) + (strengthOVR * strengthWeight) + (speedOVR * speedWeight) + (stamina * staminaWeight) + baseOVR;
        };

        int getRushingOVR() { return rushingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedOVR() { return speedOVR; }

        void setRushing(int newRushing) { rushingOVR = newRushing; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeed(int newSpeed) { speedOVR = newSpeed; }
        
        int getOVR() override { return OVR; } 
        virtual ~RunningBack() {}
        void create() override { /* WR specific logic */ }
};

class TightEnd : public Player {
    private:
        int catchingOVR = 0;
        int strengthOVR = 0;
        int speedOVR = 0;
        float catchingWeight = .45;
        float strengthWeight = .65;
        float speedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;

    public:
        TightEnd() {
            std::srand(std::time(0));
            catchingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            OVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (catchingOVR * catchingWeight) + (strengthOVR * strengthWeight) + (speedOVR * speedWeight) + (stamina * staminaWeight) + baseOVR;
        };

        int getCatchingOVR() { return catchingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedOVR() { return speedOVR; }

        void setCatching(int newCatching) { catchingOVR = newCatching; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeed(int newSpeed) { speedOVR = newSpeed; }
        
        int getOVR() override { return OVR; } 
        virtual ~TightEnd() {}
        void create() override { /* WR specific logic */ }
};

class OffensiveLineman : public Player {
    private:
        int blockingOVR = 0;
        int strengthOVR = 0;
        int awarenessOVR = 0;
        float blockingWeight = .45;
        float strengthWeight = .65;
        float awarenessWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;
    public:
        OffensiveLineman() { 
            std::srand(std::time(0));
            blockingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            awarenessOVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (blockingOVR * blockingWeight) + (strengthOVR * strengthWeight) + (awarenessOVR * awarenessWeight) + (stamina * staminaWeight) + baseOVR;
        }

        int getBlockingOVR() { return blockingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getAwarenessOVR() { return awarenessOVR; }

        void setBlocking(int newBlocking) { blockingOVR = newBlocking; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setAwareness(int newAwareness) { awarenessOVR = newAwareness; }
        
        int getOVR() override { return OVR; } 

        virtual ~OffensiveLineman() {}
        void create() override { /* WR specific logic */ }
};

class Cornerback : public Player {
    private:
        int tacklingOVR = 0;
        int strengthOVR = 0;
        int speedOVR = 0;
        float tacklingWeight = .45;
        float strengthWeight = .65;
        float speedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;
    public:
        Cornerback() { 
            std::srand(std::time(0));
            tacklingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            speedOVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (tacklingOVR * tacklingWeight) + (strengthOVR * strengthWeight) + (speedOVR * speedWeight) + (stamina * staminaWeight) + baseOVR;
        }

        int getTacklingingOVR() { return tacklingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedOVR() { return speedOVR; }

        void setTackling(int newBlocking) { tacklingOVR = newBlocking; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeed(int newSpeed) { speedOVR = newSpeed; }
        
        int getOVR() override { return OVR; } 

        virtual ~Cornerback() {}
        void create() override { /* WR specific logic */ }
};

class Safety : public Player {
    private:
        int tacklingOVR = 0;
        int strengthOVR = 0;
        int speedOVR = 0;
        float tacklingWeight = .45;
        float strengthWeight = .65;
        float speedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;
    public:
        Safety() { 
            std::srand(std::time(0));
            tacklingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            speedOVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (tacklingOVR * tacklingWeight) + (strengthOVR * strengthWeight) + (speedOVR * speedWeight) + (stamina * staminaWeight) + baseOVR;
        }

        int getTacklingingOVR() { return tacklingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedOVR() { return speedOVR; }

        void setTackling(int newBlocking) { tacklingOVR = newBlocking; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeed(int newSpeed) { speedOVR = newSpeed; }
        
        int getOVR() override { return OVR; } 

        virtual ~Safety() {}
        void create() override { /* WR specific logic */ }
};

class DefensiveEnd : public Player {
    private:
        int tacklingOVR = 0;
        int strengthOVR = 0;
        int speedOVR = 0;
        float tacklingWeight = .45;
        float strengthWeight = .65;
        float speedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;
    public:
        DefensiveEnd() { 
            std::srand(std::time(0));
            tacklingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            speedOVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (tacklingOVR * tacklingWeight) + (strengthOVR * strengthWeight) + (speedOVR * speedWeight) + (stamina * staminaWeight) + baseOVR;
        }

        int getTacklingingOVR() { return tacklingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedOVR() { return speedOVR; }

        void setTackling(int newBlocking) { tacklingOVR = newBlocking; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeed(int newSpeed) { speedOVR = newSpeed; }
        
        int getOVR() override { return OVR; } 

        virtual ~DefensiveEnd() {}
        void create() override { /* WR specific logic */ }
};

class DefensiveTackle : public Player {
   private:
        int tacklingOVR = 0;
        int strengthOVR = 0;
        int speedOVR = 0;
        float tacklingWeight = .45;
        float strengthWeight = .65;
        float speedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;
    public:
        DefensiveTackle() { 
            std::srand(std::time(0));
            tacklingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            speedOVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (tacklingOVR * tacklingWeight) + (strengthOVR * strengthWeight) + (speedOVR * speedWeight) + (stamina * staminaWeight) + baseOVR;
        }

        int getTacklingingOVR() { return tacklingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedOVR() { return speedOVR; }

        void setTackling(int newBlocking) { tacklingOVR = newBlocking; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeed(int newSpeed) { speedOVR = newSpeed; }
        
        int getOVR() override { return OVR; } 

        virtual ~DefensiveTackle() {}
        void create() override { /* WR specific logic */ }
};

class Linebacker : public Player {
    private:
        int tacklingOVR = 0;
        int strengthOVR = 0;
        int speedOVR = 0;
        float tacklingWeight = .45;
        float strengthWeight = .65;
        float speedWeight = .08;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;
    public:
        Linebacker() { 
            std::srand(std::time(0));
            tacklingOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            strengthOVR = rand() % (99 - 70 + 1) + 70;
            speedOVR= rand() % (99 - 60 + 1) + 60;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (tacklingOVR * tacklingWeight) + (strengthOVR * strengthWeight) + (speedOVR * speedWeight) + (stamina * staminaWeight) + baseOVR;
        }

        int getTacklingingOVR() { return tacklingOVR; }
        int getStrengthOVR() { return strengthOVR; }
        int getSpeedOVR() { return speedOVR; }

        void setTackling(int newBlocking) { tacklingOVR = newBlocking; }
        void setStrength(int newStrength) { strengthOVR = newStrength; }
        void setSpeed(int newSpeed) { speedOVR = newSpeed; }
        
        int getOVR() override { return OVR; } 

        virtual ~Linebacker() {}
        void create() override { /* WR specific logic */ }
};

class Kicker : public Player {
    private:
        int kickPowerOVR = 0;
        int kickAccuracyOVR = 0;
        float kickPowerWeight = .45;
        float kickAccuracyWeight = .65;
        float staminaWeight = .23;
        signed int baseOVR = -40.1;
        int OVR = 0;
    public:
        Kicker() { 
            std::srand(std::time(0));
            kickPowerOVR = rand() % (99 - 70 + 1) + 70; // (rand() % (max - min + 1)) + min
            kickAccuracyOVR = rand() % (99 - 70 + 1) + 70;
            stamina = rand() % (99 - 60 + 1) + 60;
            OVR = (kickPowerOVR * kickPowerWeight) + (kickAccuracyOVR * kickAccuracyWeight) + (stamina * staminaWeight) + baseOVR;
        }

        int getKickPowerOVR() { return kickPowerOVR; }
        int getKickAccuracyOVR() { return kickAccuracyOVR; }

        void setKickPower(int newKickPower) { kickPowerOVR = newKickPower; }
        void setKickAccuracy(int newKickAccuracy) { kickAccuracyOVR = newKickAccuracy; }
        
        int getOVR() override { return OVR; } 

        virtual ~Kicker() {}
        void create() override { /* WR specific logic */ }
};


// Add the rest here...
#endif