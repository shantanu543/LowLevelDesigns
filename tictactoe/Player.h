#include <iostream>
#include <string.h>
// #include <bits/stdc++.h>

using namespace std;

class Player{
    public:
    string playerName;
    char playerSymbol;
    Player(string playerName){
        setPlayerName(playerName);
    };
    void setPlayerName(string PlayerName){
        this->playerName = PlayerName;
    };
    string getPlayerName(){
        return this->playerName ;
    };
    void setSymbol(char symbol){
        this->playerSymbol = symbol;
    }
    char getSymbol(){
        return this->playerSymbol;
    }
};