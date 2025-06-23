#include <iostream>
using namespace std;

/*Two common ways of storing the arrays -
1) Row Major Form
2) Column Major Form*/

// we can only skip first dimension
void print2dArray(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<a[i][j]<<", ";
        }
        cout<<endl;
    }
}

int main(){
    int a[100][100];
    int m,n;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        a[i][j] = i+j;
        }
    }
    print2dArray(a,m,n);

    return 0;
}