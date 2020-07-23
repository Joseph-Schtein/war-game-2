#pragma once
#include <vector>
#include <cmath>


namespace WarGame{
    class Soldier {
        public:
        int player;
        int hp;
        int dmg;
        int max_hp;

        virtual ~Soldier() {}



        Soldier(int hp, int p,int dmg,int max_hp): hp(hp), player(p) , dmg(dmg) , max_hp(max_hp) {}

        virtual void fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board)=0;
        //naive search for closest player
        std::pair<int,int> closest_target(std::pair<int,int> source,const std::vector<std::vector<Soldier*>>& board);
           

        //naive search for player with highest HP.
        std::pair<int,int> highest_hp(std::pair<int,int> source,const std::vector<std::vector<Soldier*>>& board);
              
    };
}
