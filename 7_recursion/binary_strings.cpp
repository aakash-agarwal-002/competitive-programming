/*
Binary Strings!
You are given an integer N. Your task is to print all binary strings of size N without consecutive ones.

Constraints: N<=12

Input Format: In the given function an integer N is passed as parameter.

Output Format: Return a vector of strings, with all possible strings in a sorted order.

Sample Input: 3
Sample Output
000
001
010
100
101
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// recursion O(n)
void binaryStrings(int n, string s){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    if(s.back()=='0'){
        binaryStrings(n,s+"0");
        binaryStrings(n,s+"1");
    }
    else{
        binaryStrings(n,s+"0");
    }

}



int main() {
    int n;
    cin>>n;
    binaryStrings(n,"0");
    binaryStrings(n,"1");
    return 0;
}
