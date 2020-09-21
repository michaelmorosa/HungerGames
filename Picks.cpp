#include "Picks.h"
#include <vector>
#include <iostream>
#include <random>
#include <chrono>
#include <cstdlib>
#include <ctime>

Hunger::Picks::Picks() {

}

std::vector<std::string> Hunger::Picks::Picks1() {
    PickVector.emplace_back(" is touched by poison ivy.");
    PickVector.emplace_back(" finds a backpack and some orange juice.");
    PickVector.emplace_back(" is attacked by rabid chipmunks.");
    PickVector.emplace_back(" escapes an attack from an enemy.");
    PickVector.emplace_back(" is speared in the leg.");
    PickVector.emplace_back(" climbs a tree and spares their life.");
    PickVector.emplace_back(" is hit in the head by a log.");
    PickVector.emplace_back(" eats some potatoes to regain health.");
    PickVector.emplace_back(" is smacked in the spleen with a baseball bat.");
    PickVector.emplace_back(" makes friends with some monkeys.");
    PickVector.emplace_back(" is hit out of nowhere with a pineapple.");
    PickVector.emplace_back(" makes a fire and keeps warm.");
    PickVector.emplace_back(" has his ear cut off with an axe.");
    PickVector.emplace_back(" builds shelter.");
    PickVector.emplace_back(" is severed by a boomerang.");
    PickVector.emplace_back(" finds a hammock.");
    PickVector.emplace_back(" eats too many almonds.");
    PickVector.emplace_back(" avoids the storm.");
    PickVector.emplace_back(" gets attacked by spiders.");
    PickVector.emplace_back(" regains energy.");
    return PickVector;
}

std::vector<int> Hunger::Picks::RandomPi() {
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine e3(seed);
    rando.clear();
    int k = 1;
    while(true){
        if(k == 10){
            return rando;
        }
        rando.emplace_back(e3() % 20);
        if (rando.size() > 1) {
            for (int j = 0; j < rando.size() - 1; j++) {
                if (rando[j] == rando[rando.size() - 1]) {
                    rando.erase(rando.begin()+rando.size()-1);
                    break;
                }
                if (j == rando.size() - 2) {
                    k = k + 1;
                }
            }
        }
    }
}








