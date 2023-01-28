#include <iostream>

int** createBoard(int n){
    int** board = new int*[n];
    for(int i = 0; i < n; i++){
        board[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            board[i][j] = -1;
        }
    }
    return board;
}

void deleteBoard(int** board, int n){
    for(int i = 0; i < n; i++){
        delete[] board[i];
    }
    delete[] board;
    board = nullptr;
}

void printBoard(int** board, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout << board[i][j] << "\t";
        }
        std::cout << "\n\n";
    }
    deleteBoard(board, n);
}

bool isKnightStepped(int** board, int n, int row, int col){
    if(row >= 0 && row < n && col >= 0 && col < n && board[row][col] == -1){
        return true;
    }
    return false;
}


bool knightGame(int** board, int n, int row, int col, int step){
    if(step == n * n){
        return true;
    }
    int x[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int y[] = {1, 2, 2, 1, -1, -2, -2, -1};
    for(int i = 0; i < 8; i++){
        int xMove = row + x[i];
        int yMove = col + y[i];
        if(isKnightStepped(board, n, xMove, yMove)){
            board[xMove][yMove] = step;
            if(knightGame(board, n, xMove, yMove, step + 1)){
                return true;
            }
            board[xMove][yMove] = -1;
        }
    }
    return false;
}

void runTask_2(){
    int n;
    std::cin >> n;
    int** board = createBoard(n);
    board[0][0] = 0;
    if(knightGame(board, n, 0, 0, 1)){
        std::cout << "There is a solution!\n";
        printBoard(board, n);
    }
    else{
        std::cout << "No solution!\n";
    }
}

int main(){
    runTask_2();
    return 0;
}
