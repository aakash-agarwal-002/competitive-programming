#include <iostream>
#include <limits.h>
using namespace std;

// brute force O(n^3)
void printSubArrays(int *arr, int n) {
    int max = INT_MIN;
    cout<< max<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                    sum += arr[k];
                    cout<<arr[k]<<", ";
            }  
            cout<<"sum: "<<sum;
            if (sum > max){
                max = sum;
            }
        cout<<endl;
        }
    }
    cout<<"max sum: "<<max;
}

int main() {
    int arr[10] = {-2,3,4,-1,5,-12, 6, 1,3}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    printSubArrays(arr, n);

    return 0;
}
