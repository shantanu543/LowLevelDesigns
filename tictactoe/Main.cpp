#include <iostream>
#include <string>
#include "Board.h"

using namespace std;

int main(){
    int gameEnd = false;
    string player1,player2;
    Board mainBoard;
    mainBoard.setBoard();
    mainBoard.printBoard();
    cout<<"Enter Player 1 name: ";
    cin>>player1;
    cout<<"Enter Player 2 name: ";
    cin>>player2;
    Player Player1(player1);
    Player1.setSymbol('X');
    Player Player2(player2);
    Player2.setSymbol('0');
    Player turn = Player1;
    int currPla = 1;
    while(!gameEnd){
        if(currPla == 1)
            turn = Player1;
        else
            turn = Player2;
        char x;
        cout<<turn.getPlayerName()<<" enter the value :";
        cin>>x;
        mainBoard.markSymbol(x,turn.getSymbol());
        if(mainBoard.checkWin(turn)){
            cout<<turn.getPlayerName()<<" Win";
            gameEnd = true;
            break;
        }    
        else if(mainBoard.checkDraw(turn)){
            cout<<"Match Draw";
            gameEnd = true;
            break;
        }
        mainBoard.printBoard();
        currPla = (currPla == 1) ? 2: 1;
    }
    system("pause");
    return 0;
}