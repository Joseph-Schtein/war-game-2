#pragma once

#include "Soldier.hpp"
namespace WarGame{

class ParamedicCommander : public Soldier{
    public:

        ParamedicCommander(int pn): Soldier(200,pn,0,200){}

        void fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;
         
        
   
    };
}
