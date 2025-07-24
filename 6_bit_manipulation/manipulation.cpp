#include<iostream>
using namespace std;

int getIthBit(int n, int i){
    int  mask = 1<<i;  // mask = ith bit set, rest bits unset
    return (n & mask) > 0? 1 : 0; // n bitwise & mask gives either 0 or 1
}

int setIthBit(int n, int i){
    int  mask = 1<<i;  // mask = ith bit set, rest bits unset
    return (n | mask); // n bitwise | mask gives rest digits same with i bit set 
}

int clearIthBit(int n, int i){
    int  mask = ~(1<<i);  // mask = ith bit unset, rest bits set
    return (n & mask); // n bitwise & mask gives rest digits same with i bit clear 
}

int reverseIthBit(int n, int i){
    if (getIthBit(n,i) ==0){
        return setIthBit(n,i);
    }else{
        return clearIthBit(n,i);
    }
}

int updateIthBit(int n, int i, int v){
    if (v==0){
        if (getIthBit(n,i) == 1){
            return clearIthBit(n,i);
        }
    }
    else{
        if (getIthBit(n,i) == 0){
            return setIthBit(n,i);
        }
    }
    return n;
}



int main (){
    int n = 5; // 00000101
    int i; 
    cin>>i; // 1
    cout<<getIthBit(n,i) <<endl; // 0
    cout<<setIthBit(n,i) <<endl; // 00000111
    cout<<clearIthBit(n,i) <<endl; // 00000101
    cout<<reverseIthBit(n,i) <<endl; // 0000111
    cout<<updateIthBit(n,i,1) <<endl; // 0000111
return 0;
}