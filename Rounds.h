#include <vector>
#include <string>
#ifndef HUNGERGAMES_ROUNDS_H
#define HUNGERGAMES_ROUNDS_H

namespace Hunger {
    class Rounds {
    public:
        Rounds();
        std::vector<std::string> Rounds1(std::vector<std::string> participants, std::vector<std::string>t1, std::vector<int>t2,int Roundnumber);
    private:
        std::string fixer;
    };
}




#endif //HUNGERGAMES_ROUNDS_H
