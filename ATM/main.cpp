#include <iostream>
#include <bits/stdc++.h>
#include "Card.h"
#include "Balance.h"

using namespace std;

int main(){
    Card InputCard;
    Balance Balance;
    while(1){
        cout<<"Enter Card Number: ";
        int cardNumber;
        cin>>cardNumber;
        InputCard.setInputCardNumber(cardNumber);
        cout<<"Enter Card Pin: ";
        int cardPin;
        cin>>cardPin;
        InputCard.setInputCardPin(cardPin);
        if(InputCard.checkPin()){
            int input;
            cout<<" Enter 1. Show Balance | 2. Deposit | 3. Withdraw : ";
            cin>>input;
            int accountNumber = InputCard.getAccountNumber(cardNumber);
            int amount;
            switch(input){ 
                case 1:
                    Balance.getAccountBalance(accountNumber);
                    break;
                case 2:
                    cout<<"Enter Amount to deposit : ";
                    cin>>amount;
                    Balance.updateAccountBalance(accountNumber,amount,1);
                    break;
                case 3:
                    cout<<"Enter Amount to withdraw : ";
                    cin>>amount;
                    Balance.updateAccountBalance(accountNumber,amount,0);
                    break;
            }
        }
    }
    
    system("Pause");
    return 0;
}