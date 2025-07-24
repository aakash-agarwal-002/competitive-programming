
#include <iostream>
#include <vector>

using namespace std;

// recursion O(n)
int power(int a, int n){
    if(n==0){
        return 1;
    }
    return a*power(a,n-1);
}

// recursion Optimized
int powerOptimized(int a, int n){
    if(n==0){
        return 1;
    }
    int v = powerOptimized(a,n/2);
    if(n&1){
        return a*v*v;
    }
    return v*v;
}



int main() {
    int a,n;
    cin>>a>>n;
    cout<<"power of a = "<<a<<" raised to n = "<<n <<" is " <<power(a,n)<<endl;
    cout<<"power of a = "<<a<<" raised to n = "<<n <<" is " <<a*powerOptimized(a,n-1)<<endl;
    return 0;
}
