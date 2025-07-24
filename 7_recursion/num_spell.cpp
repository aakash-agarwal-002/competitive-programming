#include<iostream>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spellingNumber(int n){
    if(n==0){
        return;
    }
    string spelling = spell[n%10];
    
    spellingNumber(n/10);
    // print on coming from base case
    cout<<spelling<<" ";
}

int main(){
    cout<<"enter a number to convert to spell it: ";
    int n;
    cin>>n;
    spellingNumber(n);
    cout<<endl;
    return 0;
}