#include <iostream>

using namespace std;

void printsudoku(int sudoku[][9])
{
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<sudoku[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool canPlace(int sudoku[][9],int i,int j,int k){
    for(int p=0;p<9 ;p++){
        if(p!=i && sudoku[p][j] == k )
            return false;
    }
    for(int p=0;p<9 ;p++){
        if(p!=j && sudoku[i][p] == k )
            return false;
    }

    return true;
}

// recursion O(2^n)
bool sudokuSolver(int sudoku[][9],int i, int j){

    if(i==9 && j==9){
        printsudoku(sudoku);
        return true;
    }

    for(int j=0;j<9;j++){
        for(int k=1;k<10;k++){
            if (sudoku[i][j]!=0){

            }
            else if (canPlace(sudoku, i, j,k)){
                sudoku[i][j] = k;
                bool success = sudokuSolver(sudoku,i,j);
                if(success){
                    return true;
                }
            }
        }
       bool success = sudokuSolver(sudoku,i+1,j);
    }
    return false;
}



int main() {
    int sudoku[9][9] = {0};
    sudokuSolver(sudoku,0,0);
    return 0;
}
