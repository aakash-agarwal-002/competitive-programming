#include <iostream>
using namespace std;

int main(){

    int arr[10]; // -1785896960 1 1793290776 1 1793290528 1 -1785709508 1 -13434720 1 
    
    for(int i=0;i<10;i++){
        cout << arr[i]<<" ";
    }
    cout<<"\n";


    int arr2[10] = {0}; // 0 0 0 0 0 0 0 0 0 0 
    for(int i=0;i<10;i++){
        cout << arr2[i]<<" ";
    }
    cout<<"\n";
    
    int arr3[10] = {1,2,3}; //1 2 3 0 0 0 0 0 0 0 
    for(int i=0;i<10;i++){
        cout << arr3[i]<<" ";
    }
    cout<<"\n";

    return 0;
}