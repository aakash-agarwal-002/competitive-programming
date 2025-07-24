#include <iostream>
using namespace std;

void printAllPairs(int *arr, int n) {
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        cout<<"("<<arr[i]<<", "<<arr[j]<<"), ";
    }
    }
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    printAllPairs(arr, n);

    return 0;
}
