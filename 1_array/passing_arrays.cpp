#include <iostream>
using namespace std;

void printArray1(int arr[], int n){
    cout<< "inside printArray1: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void printArray2(int *arr, int n){
    arr[0] = 10;
    cout<<"value of arr[0] change to 10 inside printArray2: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/4;

    cout<< "inside main: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    // arrays are passed by reference and not by value
    // so only the address of array is passed to function
    // any changes in array inside the function that array is passed to will also change actual function
    printArray1(arr,n); 
    cout<<"\n";

    printArray2(arr,n); 
    cout<<"\n";

    cout<< "inside main: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}