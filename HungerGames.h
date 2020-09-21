#include <iostream>
#include <vector>
#include <string>
#include "Rounds.h"
#include "Picks.h"
#ifndef HUNGERGAMES_HUNGERGAMES_H
#define HUNGERGAMES_HUNGERGAMES_H

namespace Hunger {
    class HungerGames {
    public:
        HungerGames();
        void play();
        std::vector<std::string>DetermineParticipants();
        void PlayGame(std::vector<int>t2,std::vector<std::string>particpants2);
        bool GameOver(std::vector<std::string>participants);
    private:
        std::vector<std::string>participants;
        std::vector<std::string>participants2;
        std::vector<std::string>t1;
        std::vector<int>t2;
        Picks pick;
        Picks pick1;
        Rounds round;
        int RoundNumber = 0;
    };
}

#endif //HUNGERGAMES_HUNGERGAMES_H
