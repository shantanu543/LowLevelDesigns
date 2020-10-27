#include <iostream>
#include <string>

using namespace std;

class TicTacToe{
    private:
    char table[3][3];
    public :
    TicTacToe() {};
    
    void setTable(){
        int i,j, n = 1;
        for(i =0; i< 3;i++){
            for(j = 0;j<3;j++){
                table[i][j] = '0'+ n;
                n++;
            }
        }
    }

    void printTable(){
        int i,j, n = 1;
        for(i =0; i< 3;i++){
            for(j = 0;j<3;j++){
                cout<<" "<<table[i][j]<< " |";
            }
            cout<<endl;
        }
    }

    bool writePlayerInput(char Player, char num){
        bool wrongInput = true;
        for(int i =0; i< 3;i++){
            for(int j = 0;j<3;j++){
               if(table[i][j] == num){
                    table[i][j] = Player; 
                    wrongInput = false;
               }
                    
            }
        }
        if(wrongInput == true && (num != 'q' || num != 'Q'))
            cout<<"Wrong input"<<"\n";
        
        return wrongInput;
    }

    bool checkWin(){
        bool isWin = false;
        for(int i =0;i<3;i++){
            if(table[i][0] == table[i][1] && table[i][1] == table[i][2])
                isWin = true;
        }
        for(int i =0;i<3;i++){
            if(table[0][i] == table[1][i] && table[1][i] == table[2][i])
                isWin = true;
        }
        if(table[0][0] == table[1][1] && table[1][1] == table[2][2])
            isWin = true;
        if(table[2][0] == table[1][1] && table[1][1] == table[0][2])
            isWin = true;
        
        return isWin;
    }

    bool checkDraw(){
        int counter = 0;
        int num = 1;
        for(int i =0;i<3;i++){
            for(int j =0;j<3;j++){
                if(table[i][j] == num)
                    counter++;
                num++;
            }
        }
        if(counter > 0)
            return true;
        else 
            return false;
    }

    void Exit(){
        cout<<"Thank You"<<"\n";
    }
};