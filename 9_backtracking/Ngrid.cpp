#include <iostream>

using namespace std;

// recursion O(2^n)
int NGrid(int m,int n,int i, int j){

    if(i==m && j==n){
        return 1;
    }
    if(i>m || j>n){
        return 0;
    }
    int ways = 0;
    ways+=NGrid(m,n,i+1,j);
    ways+=NGrid(m,n,i,j+1);
    return ways;
}


int main() {
    int m,n;
    cin>>m>>n;
    cout<<NGrid(m-1,n-1,0,0);
    cout<<endl;
    return 0;
}
