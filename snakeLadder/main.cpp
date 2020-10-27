#include <iostream>
#include <map>
#include "board.h"

using namespace std;

void playeGame(Board myboard, string player1, string player2){
    bool gameEnd = false;
    int diceValue = 0;
    int curr = 1;
    int player1CurrPosition = 0, player2CurrPosition = 0;
    int initialPlayer1Position = 0, intialPlayer2Position =0;
    while(!gameEnd){
        diceValue = myboard.getDiceValue();
        if(curr == 1){
            initialPlayer1Position = player1CurrPosition;
            player1CurrPosition = myboard.incrementScore(curr,player1CurrPosition, diceValue);
            if(myboard.checkSnake(player1CurrPosition))
            {
                cout<<player1<<" Moved from "<<initialPlayer1Position<<" To "<<player1CurrPosition;
            }
            else if(myboard.checkLadder(player1CurrPosition)){
                cout<<player1<<" Moved from "<<initialPlayer1Position<<" To "<<player1CurrPosition;
            }else{
                cout<<player1<<" Moved from "<<initialPlayer1Position<<" To "<<player1CurrPosition;
            }
            cout<<'\n';
            if(myboard.checkWin(player1CurrPosition)){
                cout<<player1 + " Win"<<endl;
                gameEnd = true;
                break;
            } 
            curr = 2;
        }
        else{
            intialPlayer2Position = player2CurrPosition;
            player2CurrPosition = myboard.incrementScore(curr, player2CurrPosition,diceValue);
            if(myboard.checkSnake(player2CurrPosition))
            {
                cout<<player2<<" Moved from "<<intialPlayer2Position<<" To "<<player2CurrPosition;
            }
            else if(myboard.checkLadder(player2CurrPosition)){
                cout<<player2<<" Moved from "<<intialPlayer2Position<<" To "<<player2CurrPosition;
            }else{
                cout<<player2<<" Moved from "<<intialPlayer2Position<<" To "<<player2CurrPosition;
            }
            cout<<'\n';
            if(myboard.checkWin(player2CurrPosition)){
                cout<<player2<<" Win"<<endl;
                gameEnd = true;
                break;
            }
            curr = 1;
        }
    }
    
}
int main(){
    Board myboard;
    int n,m,value1,value2;
    string player1, player2;
    cout<<"Enter snake number value :";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>value1;
        cin>>value2;
        myboard.insertValuesSnake(value1,value2);
    }
    cout<<endl;
    cout<<"Enter Ladder number value :";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>value1;
        cin>>value2;
        myboard.insertValuesLadder(value1,value2);
    }
    cout<<'\n'<<"Enter Player1 name: ";
    cin>>player1;
    cout<<'\n'<<"Enter Player2 name: ";
    cin>>player2;
    playeGame(myboard,player1,player2);
    system("pause");
    return 0;

}