#include "Soldier.hpp"

namespace WarGame{



	 std::pair<int,int> Soldier::closest_target(std::pair<int,int> source,const std::vector<std::vector<Soldier*>>& board){
            std::pair<int,int> target = {-1,-1};

            double dist;
            double min=999;
            int p;
            board[source.first][source.second]->player == 1 ? p=2 : p=1;

            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[i].size();j++){
                    if(board[i][j]!=nullptr && board[i][j]->player==p){
                        dist=sqrt(pow(source.first-i,2)+pow(source.second-j,2)); // distant formula : sqrt(a^2+b^2)
                        if(dist<min) {
                            min=dist;
                            target = {i,j};
                        }
                    }
                }
        
            } 
            return target;  
            
        }
        
        
         std::pair<int,int> Soldier::highest_hp(std::pair<int,int> source,const std::vector<std::vector<Soldier*>>& board){
            std::pair<int,int> target = {-1,-1};
            double hp;
            double max=0;
            int p;
            board[source.first][source.second]->player == 1 ? p=2 : p=1;

            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[i].size();j++){
                    if(board[i][j]!=nullptr && board[i][j]->player==p){
                        hp=board[i][j]->hp; // distant formula : sqrt(a^2+b^2)
                        if(hp>max) {
                            max=hp;
                            target = {i,j};
                        }
                    }
                }
        
            } 
            return target;   
        }        
}
