#pragma once
#include "Paramedic.hpp"

namespace WarGame{

	void Paramedic::fire(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override{
		for(int i = source.first-1;i<=source.first+1;i++){
	        	for(int j = source.second-1;j<=source.second+1;j++){
	                	if(i>=0 && i<board.size() && j>=0 && j<board[i].size()) {
	                       	if (board[i][j]!=nullptr && i != source.first && j != source.second){
	                       	     if(board[i][j]->player==board[source.first][source.second]->player){
	                       	         board[i][j]->hp=max_hp;
	                       	     }
	                       	 }
	                    	}
	                }
	        }
	}
}
