#include<iostream>
using namespace std;


void passByValue(int x){
    x = x+10;
}

// instead of value address of x is passed and actual value of x is changed using deferencing
void passByPointer(int *x){
     *x = *x+10;
}

// works on same reference of x, y is just alias of x
void passByReference(int &y){
     y = y+10;
}


int main(){
    int x=10; 

    cout<<"x="<< x <<endl; 

    passByValue(x);
    cout<<"passByValue: x=" << x <<endl; // 10, value not changed

    passByPointer(&x);
    cout<<"passByPointer: x="<< x <<endl; // 20

    passByReference(x);
    cout<<"passByReference: x="<< x <<endl; // 30
    

    return 0;   
}