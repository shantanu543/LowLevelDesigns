#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

class Board{
    private:
    unordered_map<int,int>snake;
    unordered_map<int,int>ladder;
    public:
    Board() {};
    

    void insertValuesSnake(int a, int b){
        if(snake.find(a) == snake.end())
            snake.insert({a,b});
    }
    void insertValuesLadder(int a, int b){
        if(ladder.find(a) == ladder.end())
            ladder.insert({a,b});
    }

    void printSnakeValues(){
         for(auto it = snake.begin(); it != snake.end();++it){
            cout<<it->first<<" "<<it->second;
        }
        
    }
    void printLadderValues(){
        for(auto it = ladder.begin(); it != ladder.end();++it){
            cout<<it->first<<" "<<it->second;
        }
    }

    int getDiceValue(){
        return ((rand() % 6) + 1); 
    }

    int incrementScore(int playerid, int playerPosition, int diceValue){
        if(playerid == 1){
            if(playerPosition + diceValue <= 100)
                playerPosition = playerPosition + diceValue;
        }
        else
        {
            if(playerPosition + diceValue <= 100)
                playerPosition = playerPosition + diceValue;
        }
    return playerPosition;
    }

    bool checkWin(int playerPosition){
        if(playerPosition == 100){
            return true;
        }
        return false;
    }

    bool checkSnake(int playerPosition){
        if(snake.find(playerPosition) != snake.end()){
            playerPosition = snake[playerPosition];
            return true;
        }
        return false;
    }
    bool checkLadder(int playerPosition){
        if(ladder.find(playerPosition) != ladder.end()){
            playerPosition = snake[playerPosition];
            return true;
        }
        return false;
    }
};