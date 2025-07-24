#include<iostream>
using namespace std;


/*
& operator:
 - Address of operator
 - Reference variable

* operator
 - Pointer variable
 - Dereference variable
*/

int main(){
    int x=10; 

    // Address of operator: &var
    cout<<"x="<< &x <<endl; // prints the address of var x
    
    //int m = &x; error: cannot initialize a variable of type 'int' with an rvalue of type 'int *'

    // Pointer variable: *
    int *y = &x; // y stores the address of var x
    cout<<"y="<< y <<endl; 

    // Dereference operator: *
    int z = *y; // y stores the address of var x and z dereferences to obtains value at y (address x)
    cout<<"z="<< z <<endl; // 10


    // Reference operator: &
    int &w = z; // w is just alias name for z, no new memory allocated to w
    cout<<"w="<< w <<endl; // w=z=10
    w++;
    cout<<"w="<< w <<", z="<< z  <<endl; // w=z=11 both are incremented

    return 0;   
}