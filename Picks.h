#include <vector>
#include <string>
#include <random>
#include <chrono>
#ifndef HUNGERGAMES_PICKS_H
#define HUNGERGAMES_PICKS_H

namespace Hunger {
    class Picks {
    public:
        Picks();
        std::vector<std::string> Picks1();
        std::vector<int> RandomPi();

    private:
        std::vector<std::string>PickVector;
        std::vector<int>rando;
    };
}

#endif //HUNGERGAMES_PICKS_H
