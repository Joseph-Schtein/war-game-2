#pragma once
#include "FootCommander.hpp"

namespace WarGame{

    class FootCommander : public Soldier {
        public:
        FootCommander(int pn):Soldier(150,pn,20,150){}

        void fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;
    
    };
}
