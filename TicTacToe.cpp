#include <string>
#include <iostream>

using namespace std;

void createBoard(){    
    int Board[3][3] = {};
}

string GetPlayerChoice(){
    string choice; 
    cin >> choice; 
    return choice; 
    
}

int** CreateBoard() {
    int** arr;
    int number = 1;
    arr = new int*[3];
    for(int n=0; n<3; n++) {
        arr[n] = new int[3];
        for(int i=0; i<3; i++) {
            arr[n][i] = number++ ;
        }
    }
    return arr;
}

void PrintBoard(int** board) {
    printf("%d %d %d\n%d %d %d\n%d %d %d\n",
    board[0][0], board[0][1], board[0][2],
    board[1][0], board[1][1], board[1][2],
    board[2][0], board[2][1], board[2][2]);
}





int main(){
    int** board = CreateBoard();
    PrintBoard(board);

    cout << "Choose a position to play." << endl;
    GetPlayerChoice();



    return 0; 
}