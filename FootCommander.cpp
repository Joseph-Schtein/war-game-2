#pragma once
#include "FootCommander.hpp"

namespace WarGame{

	void FootCommander::fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) {
            std::pair<int,int> target = this->closest_target(source,board);
            if(target.first==-1 && target.second==-1) return;

            board[target.first][target.second]->hp-=board[source.first][source.second]->dmg;
            if(board[target.first][target.second]->hp<=0){
                delete(board[target.first][target.second]);
                board[target.first][target.second]=nullptr;
            }
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[i].size();j++){
                    if(board[i][j]!=nullptr && board[i][j]->player==board[source.first][source.second]->player) {
                        if(board[i][j]->max_hp==100 && board[i][j]->dmg==10){ // means this is a foot soldier
                            board[i][j]->fire({i,j},board);
                        }
                    }
                }
            }
        }
}        
