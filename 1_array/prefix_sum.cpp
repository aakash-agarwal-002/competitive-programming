#include <iostream>
#include <limits.h>
using namespace std;

// brute force O(n^3)
void largestSubArraySum1(int *arr, int n) {
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++)
                    sum += arr[k];
            if (sum > max){
                max = sum;
            }
        }
    }
    cout<<"max sum: "<<max;
}

// using prefix sum O(n^2)
void largestSubArraySum2(int *arr, int n) {
    int max = INT_MIN;
    int* prefix = new int[n];
    prefix[0] = arr[0];

    for(int i=1;i<n;i++){
        prefix[i] = arr[i] + prefix[i-1];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = i>0 ? prefix[j] - prefix[i-1]: prefix[j];
            if (sum > max){
                max = sum;
            }
        }
    }
    cout<<endl;
    cout<<"max sum: "<<max;
}

// using kadane's algo O(n)
void largestSubArraySum3(int *arr, int n) {
    int cs = 0;
    int max = 0;
    for(int i=0;i<n;i++){
        cs = cs + arr[i] > 0? cs + arr[i] : 0;
        if (cs>max){
            max = cs;
        }
    }
    cout<<endl;
    cout<<"max sum: "<<max;
}


int main() {
    int arr[10] = {-2,3,4,-1,5,-12, 6, 1,3}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    largestSubArraySum1(arr, n);
    cout<<endl;
    largestSubArraySum2(arr, n);
    cout<<endl;
    largestSubArraySum3(arr, n);
    cout<<endl;

    return 0;
}
