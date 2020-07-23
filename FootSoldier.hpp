#pragma once
#include "Soldier.hpp"
namespace WarGame{
    class FootSoldier : public Soldier {
        public:
        FootSoldier(int pn):Soldier(100,pn,10,100){}

        void fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;
           
    };

}
