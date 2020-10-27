#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Card{
    private:
    public:
    map<int,pair<int,int>>cardMap;
    int inputCardNumber;
    int inputCardPin;
    Card(){
        initMap();
    };

    void initMap(){
        cardMap.insert({1,{1234,1}});
        cardMap.insert({2,{3456,2}});
    }

    map<int,pair<int,int>>getMap(){
        return cardMap;
    }
    int getInputCardNumber(){
        return this->inputCardNumber;
    }

    int setInputCardNumber(int cardNumber){
        this->inputCardNumber = cardNumber;
        // cout<<getInputCardNumber();
    }

    int getInputCardPin(){
        return this->inputCardPin;
    }

    int setInputCardPin(int pin){
        this->inputCardPin = pin;
        // cout<<getInputCardPin();
    }

    bool checkPin(){
        if(cardMap.find(this->inputCardNumber) == cardMap.end()){
            cout<<"Card Not Present";
            return false;
        }
        else if(cardMap.at(this->inputCardNumber).first != this->inputCardPin){
            cout<<"Pin Invalid";
            return false;
        }
        else if(cardMap.at(this->inputCardNumber).first == this->inputCardPin){
            return true;
        }
    }

    int getAccountNumber(int cardNumber){
        return cardMap.at(cardNumber).second;
    }
};