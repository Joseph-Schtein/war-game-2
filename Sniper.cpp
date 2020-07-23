#pragma  once
#include "Sniper.hpp"

namespace WarGame{

	void Sniper::fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override{
            std::pair<int,int> target = this->highest_hp(source,board);
            if(target.first==-1 && target.second==-1) return; // if there is'nt such a player - return

            board[target.first][target.second]->hp-=board[source.first][source.second]->dmg;
            if(board[target.first][target.second]->hp<=0){
                delete(board[target.first][target.second]);
                board[target.first][target.second]=nullptr;
            }

        }
}         
