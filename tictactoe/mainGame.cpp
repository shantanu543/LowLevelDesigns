#include <iostream>
#include <string>
#include "TicTacToe.h"

using namespace std;

int main(){
    bool gameEnd = false;
    int curr = 1;
    char player1 = 'X';
    char player2 = '0';
    TicTacToe game;
    game.setTable();
    char inputVal;
    bool wrongInput;
    while(!gameEnd){
        game.printTable();
        switch (curr)
        {
        case 1:
            cout<<"Enter Player1 Input or Press q to exit: ";
            cin>>inputVal;
            wrongInput = game.writePlayerInput(player1,inputVal);
            if(wrongInput == true){
                gameEnd = true;
                break;
            }  
            if(game.checkWin() || game.checkDraw() || (inputVal == 'q' || inputVal == 'Q')){
                gameEnd = true;
                if(game.checkWin())
                    cout<<"Player2 Won"<<"\n";
                else if(game.checkDraw())
                    cout<<"Game Draw"<<"\n";
            }
            else
                curr = 2;
            break;
        case 2:
            cout<<"Enter Player2 Input or Press q to exit: ";
            cin>>inputVal;
            wrongInput = game.writePlayerInput(player2,inputVal);
            if(wrongInput == true){
                gameEnd = true;
                break;
            }
            if(game.checkWin() || game.checkDraw() || (inputVal == 'q' || inputVal == 'Q')){
                gameEnd = true;
                if(game.checkWin())
                    cout<<"Player2 Won"<<"\n";
                else if(game.checkDraw())
                    cout<<"Game Draw"<<"\n";
            }   
            else
                curr = 1;
            break;
        }
        if(inputVal == 'q' || inputVal == 'Q'){
            game.Exit();
        }
        if(gameEnd == true){
            game.setTable();
            gameEnd = false;
            wrongInput = false;
            curr =1;
        }
    }
    system("pause");
    return 0;
}