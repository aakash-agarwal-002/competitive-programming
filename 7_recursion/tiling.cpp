/*
Tiling Problem!
You are given N tiles of size 1 x M, There is a floor of size N x M which you have to cover with tiles. 
Find the number of ways the floor can be completely covered if you can place the tiles in both horizontal and vertical manner.

Input Format: In the function, two integers N and M are passed.
*/

#include <iostream>
#include <vector>

using namespace std;

// recursion O(n)    2      3
int tilingNumber(int m, int n){
    if(n<m){
        return 1;
    }
    int placeHorizontal = tilingNumber(m,n-m); // 1+ (2,1)->1 
    int placeVertical = tilingNumber(m,n-1); // 1+ (2,2)->1 + 1 + (2,0) + 1 + (2,1)- > 3
    return placeHorizontal + placeVertical;
}



int main() {
    int m,n;
    cin>>m>>n;
    cout<<tilingNumber(m,n);
    return 0;
}
