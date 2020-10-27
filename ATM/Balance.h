#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

class Balance{
    public:
    map<int,int>balanceMap;
    int inputAccountBalance;
    Balance(){
        initBalance();
    };

    void initBalance(){
        balanceMap.insert({1,1000});
        balanceMap.insert({2,2000});
    }

    void getAccountBalance(int accountNumber){
        cout<<"Balance is: "<<balanceMap.at(accountNumber)<< endl;
    }

    void updateAccountBalance(int accountNumber, int amount,int assignment){
        if(assignment == 1)
            balanceMap.at(accountNumber) += amount;
        else
            balanceMap.at(accountNumber) -= amount; 
        getAccountBalance(accountNumber);
    }
};