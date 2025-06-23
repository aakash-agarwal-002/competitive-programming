#include <iostream>
using namespace std;

void printSubArrays(int *arr, int n) {
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                    cout<<arr[k]<<", ";
                }  
        cout<<endl;
        }
    }
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    printSubArrays(arr, n);

    return 0;
}
