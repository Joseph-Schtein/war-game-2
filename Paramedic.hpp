#pragma once
#include "Soldier.hpp"
namespace WarGame {
    class Paramedic : public Soldier{
        public:
        Paramedic(int pn): Soldier(100, pn, 0,100){}

        void fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;
    };
}
