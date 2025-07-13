#include<iostream>
using namespace std;

int main(){
    int n =10;
    int *x = new int; // dynamic variable created in heap memory, its address is still in stack memory
    int *arr = new int[n]; // dynamic array created in heap memory, its address is still in stack memory

    *x = 3; // x is address

    for (int i=0; i<n;i++){
        arr[i] = i;
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    cout<< x<<endl; // 0x102cfdca0
    cout<< arr<<endl; // 0x102cfd9b0 

    delete []arr;
    delete x;

    // we still have access to address of deleted var x and array arr because it is stored in stack but not the values
    cout<< x<<endl; // 0x102cfdca0
    cout<< arr<<endl; // 0x102cfd9b0

    // to remove these address we can set them to nullptr
    x = nullptr; 
    arr = nullptr; 

    return 0;   
}