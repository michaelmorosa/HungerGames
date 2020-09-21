#include "Rounds.h"
#include <vector>
#include <iostream>
#include <string>


Hunger::Rounds::Rounds() {

}

std::vector<std::string> Hunger::Rounds::Rounds1(std::vector<std::string>participants, std::vector<std::string> t1,
                        std::vector<int> t2,int RoundNumber) {
    std::cout << "Results of Round " << RoundNumber << std::endl;
    for (int z = 0; z <= participants.size()-1; z++)
    {
        if(participants[z] == " "){
            continue;
        }
        std::cout << participants[z] + t1[t2[z]] << std::endl;
            if((t2[z] == 0) or (((t2[z]) % 2) == 0)) {
                participants[z] = " ";
            }
    }
    std::cout << " " << std::endl;
    for (int p = 0; p <= participants.size()-1; p++)
    {
        if(participants[p] == " "){
            participants.erase(participants.begin()+p);
        }
    }
    for (int q = 0; q < participants.size(); q++)
    {
        if (participants[q] != " "){
            break;
        }
        if (q == participants.size()-1){
            return participants;
        }
    }
    //Determine how to assess which are still in or not
    std::cout << "The survivors after this round are: " << std::endl;
    for (int q = 0; q <= participants.size()-1; q++)
    {
        if(participants[q] == " "){
            continue;
        }
        std::cout << participants[q] << std::endl;
    }
    std::cout << std::endl;
    return participants;
}





