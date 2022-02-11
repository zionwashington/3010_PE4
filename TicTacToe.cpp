#include <string>
#include <utility>
#include <iostream>

using namespace std;

void createBoard(){    
    char Board[3][3] = {};
}

int GetPlayerChoice(){
    int choice; 
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
            arr[n][i] = '0'+ number++ ;
        }
    }
    return arr;
}

void PrintBoard(int** board) {
    printf("%c %c %c\n%c %c %c\n%c %c %c\n",
    board[0][0], board[0][1], board[0][2],
    board[1][0], board[1][1], board[1][2],
    board[2][0], board[2][1], board[2][2]);
}
void PlaceMarker(int** board, int pos, int marker) {
    int x = (pos-1)%3;
    int y = (pos-1)/3;
    board[y][x] = marker;
}

int main(){
    int** board = CreateBoard();
    char player = 'x';
    for(int n=0; n<9; n++) {
        PrintBoard(board);
        cout << "Choose a position to play (" << player << ")" << endl;
        int choice = GetPlayerChoice();
        PlaceMarker(board, choice, player);
        player = player=='x' ? 'y' : 'x';
    }
    std::cout << "Game Over" << std::endl;



    return 0; 
}