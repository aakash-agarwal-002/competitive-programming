
#include <iostream>
#include <vector>

using namespace std;

// recursion starting from first index
int firstOccurance2(int *arr,int n,int target){
    if (n==0){
        return -1;
    }
    if(arr[0]==target){
        return 0;
    }
    int v = firstOccurance2(arr+1,n-1,target);
    if(v==-1){
        return -1;
    }
    else{
        return 1 + v;
    }
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<", ";
    }
    cout<<endl;

    int target;
    cin>>target;
    if(firstOccurance2(arr, n, target)==-1){
        cout<< "element not found";
    }
    else{
        cout<< "element found at index: "<<firstOccurance2(arr, n, target);
    }
    cout <<endl;
    return 0;
}
