#include <iostream>
#include <string>
// #include <bits/stdc++.h>
#include "Player.h"

using namespace std;

class Board{
    private:
    char board[3][3];
    int n = 3;
    public:
    Board() {};
    void setBoard(){
        int k =1;
        for(int i = 0;i<n;i++){
            // vector<char>curr;
            for(int j = 0;j<n;j++){
                // curr.push_back('0' +k);
                board[i][j] = '0' + k;
                k++;
            }
            // v.push_back(curr);
        }
    }

    void printBoard(){
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                cout<<board[i][j] <<" ";
                if(j != n-1)
                    cout<<"|"<<" ";
            }
            cout<<endl;
        }
    }

    void markSymbol(char x, char symbol){
        for(int i =0;i<3;i++){
            for(int j =0;j<3;j++){
                if(board[i][j] == x){
                    board[i][j] = symbol;
                }
            }
        }
    }

    bool checkWin(Player Playerid){
        char symbol = Playerid.getSymbol();
        for(int i =0;i<3;i++){
            if(board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
                return true;
        }
        for(int i =0;i<3;i++){
            if(board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
                return true;
        }
        if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
            return true;
        if(board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
            return true;
        
        return false;
    }

    bool checkDraw(Player Playerid){
        int k = 1,l=0;
        for(int i =0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(board[i][j] == k)
                    l++;
                k++;
            }
        }
        if(l >0)
            return true;
        else
            return false;
    }
};