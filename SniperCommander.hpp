#pragma once

#include "Soldier.hpp"
namespace WarGame{
    class SniperCommander : public Soldier{
    public:
        SniperCommander(int pn):Soldier(120,pn,100,120){}
        
        void fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;
                

    };
}
