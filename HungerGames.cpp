#include "HungerGames.h"
#include <string>
#include <iostream>
#include <vector>

Hunger::HungerGames::HungerGames()
    {
    }

void Hunger::HungerGames::play() {
    participants2 = DetermineParticipants(); //Determine the starting participants
    t1 = pick.Picks1(); //Put all options into a vector
    t2 = pick1.RandomPi();
    PlayGame(t2,participants2);
}


std::vector<std::string> Hunger::HungerGames::DetermineParticipants() {
    std::string First;
    std::cout << "First Hunger Games Participant:" << std::endl;
    std::cin >> First;
    participants.push_back(First);

    std::string Second;
    std::cout << "Second Hunger Games Participant:" << std::endl;
    std::cin >> Second;
    participants.push_back(Second);

    std::string Third;
    std::cout << "Third Hunger Games Participant:" << std::endl;
    std::cin >> Third;
    participants.push_back(Third);

    std::string Fourth;
    std::cout << "Fourth Hunger Games Participant:" << std::endl;
    std::cin >> Fourth;
    participants.push_back(Fourth);

    std::string Fifth;
    std::cout << "Fifth Hunger Games Participant:" << std::endl;
    std::cin >> Fifth;
    participants.push_back(Fifth);

    std::string Sixth;
    std::cout << "Six Hunger Games Participant:" << std::endl;
    std::cin >> Sixth;
    participants.push_back(Sixth);

    std::string Seventh;
    std::cout << "Seven Hunger Games Participant:" << std::endl;
    std::cin >> Seventh;
    participants.push_back(Seventh);

    std::string Eighth;
    std::cout << "Eight Hunger Games Participant:" << std::endl;
    std::cin >> Eighth;
    participants.push_back(Eighth);

    std::string Ninth;
    std::cout << "Ninth Hunger Games Participant:" << std::endl;
    std::cin >> Ninth;
    participants.push_back(Ninth);

    std::string Tenth;
    std::cout << "Tenth Hunger Games Participant:" << std::endl;
    std::cin >> Tenth;
    participants.push_back(Tenth);

    return participants;
}

void Hunger::HungerGames::PlayGame(std::vector<int>t2,std::vector<std::string>particpants2){
    while(true){
        if(GameOver(particpants2)){
            std::cout << "Thanks for playing!" << std::endl;
            exit(0);
        }
        std::string next;
        std::cout << "Type 'next' and then hit enter to move to the results of the next round:" << std::endl;
        std::cin >> next;
        if (next == "next") {}
            RoundNumber++; //Increase the Round Number
            t2 = pick1.RandomPi();
            PlayGame(t2, round.Rounds1(particpants2, t1, t2, RoundNumber));
    }
  }


bool Hunger::HungerGames::GameOver(std::vector<std::string>participants2) {
    int r = 0;
    for(int p = 0; p < participants2.size(); p++){
        if(participants2[p] != " "){
            r++;
        }
        if ((p == participants2.size() - 1) and r > 1){
            return false;
        }
        if ((p == participants2.size() - 1) and r == 0){
            std::cout << "No one made it out alive" << std::endl;
            return true;
        }
        if ((p == participants2.size() - 1) and r == 1){
            for(int u = 0; u < participants2.size(); u++){
                if(participants2[u] != " "){
                    std::cout << "The Winner of the Hunger Games is " << participants2[u] << "!" << std::endl;
                    return true;
                }
            }
        }
    }
}






