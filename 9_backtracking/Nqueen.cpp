#include <iostream>

using namespace std;

void printBoard(int board[][20],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool canPlace(int board[][20],int n,int i,int j){
    int x = i, y=j;
    // can I place in same column?
    for(int k=0;k<x;k++){
        if(board[k][y]==1)
            return false; 
    }
    x = i, y=j;
    // can I place in left diagonal?
    while(x>=0&&y>=0){
        if(board[x][y]==1)
            return false; 
        x--;y--;
    }
    x = i, y=j;
    // can I place in right diagonal?
    for(int k=x-1;k>=0&&y<n-1;k--){
        y=y+1;
        if(board[k][y]==1)
            return false; 
    }
    return true;
}

// recursion O(2^n)
bool NQueenOne(int board[][20],int n,int i){

    if(i==n){
        printBoard(board,n);
        return true;
    }

    for(int j=0;j<n;j++){
        if (canPlace(board,n, i, j)){
            board[i][j] = 1;
            bool success = NQueenOne(board,n,i+1);
            if(success){
                return true;
            }
            board[i][j] = 0; // backtrack and continue in same row
        }
    }
    return false;
}

// recursion O(2^n)
bool NQueenAll(int board[][20],int n,int i){

    if(i==n){
        printBoard(board,n);
        return true;
    }

    for(int j=0;j<n;j++){
        if (canPlace(board,n, i, j)){
            board[i][j] = 1;
            bool success = NQueenAll(board,n,i+1);
            if(success){
                return true;
            }
            board[i][j] = 0; // backtrack and continue in same row
        }
    }
    return false;
}




int main() {
    int board[20][20] = {0};
    NQueenOne(board,10,0);
    NQueenAll(board,10,0);
    return 0;
}
