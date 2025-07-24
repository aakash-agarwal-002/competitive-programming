
#include <iostream>
#include <vector>

using namespace std;

// recursion only on inner loop of iterative code
void bubbleSort1(int *arr,int n){
    if (n==1){
        return;
    }
    if(arr[0]>arr[1]){
        swap(arr[0],arr[1]);
    }
    bubbleSort1(arr+1,n-1);
}

// recusion on only outer loop of iterative code
void bubbleSort2(int *arr,int n){
    if (n==1){
        return;
    }
    // places largest element in the end
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    // recursive call on one less from last
    bubbleSort2(arr,n-1);
}

// recursion on both loops
void bubbleSort3(int *arr,int n, int j){
    if (n==1){
        return;
    }
    if(j!=n-1){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        bubbleSort3(arr,n,j+1);
    }

    // recursive call on one less from last and start j from 0 again
    bubbleSort3(arr,n-1,0);
}



int main() {
    int arr[10] = {7,8,4,10,1,2,3,4,5,6}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<", ";
    }
    for(int i=0;i<n;i++){
        bubbleSort1(arr,n-i);
    }
    cout <<endl<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<", ";
    }
    
    int arr2[10] = {7,8,4,10,1,2,3,4,5,6}; // sorted arr2ay
    cout <<endl;
    cout <<"before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr2[i]<<", ";
    }
    bubbleSort2(arr2,n);
    cout <<endl<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr2[i]<<", ";
    }
    cout <<endl;

    int arr3[10] = {7,8,4,10,1,2,3,4,5,6}; // sorted arr3ay
    cout <<"before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr3[i]<<", ";
    }
    bubbleSort3(arr3,n,0);
    cout <<endl<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr3[i]<<", ";
    }
    cout <<endl;

    return 0;
}
