#pragma  once
#include "Soldier.hpp"
namespace WarGame{

    class Sniper : public Soldier{
    public:
        Sniper(int pn) : Soldier(100,pn,50,100){}

        void fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;      

    };
}
