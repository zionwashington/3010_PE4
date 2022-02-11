#include <string>
#include <iostream>

using namespace std;

void DisplayBoard(int board[3][3]){
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << "|" << board[i][j] << "|";
            if(j==2)
            {
                cout << endl;
            }
        }
    }

}
void createBoard(){

    int Board[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    DisplayBoard(Board);
}

int main(){

    createBoard();
    

    return 0; 
}