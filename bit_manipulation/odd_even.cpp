#include<iostream>
using namespace std;

int main(){
    int x; 

    cin>>x;

    // last binary digit of number x decides whether a number is even (0) or odd (1), so if we x&1 we get even (0) or odd (1)
    if ((x & 1) == 1){
        cout<<"x = "<<x<<" is odd";
    }
    else{
        cout<<"x = "<<x<<" is even";
    }
    cout<< endl;
    
    return 0;   
}