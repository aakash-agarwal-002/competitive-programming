
#include <iostream>
#include <vector>

using namespace std;

// recursion starting from last index
void lastOccurance1(int *arr,int n,int target){
    if(n==0){
        cout<< "element not found";
        return;
    }
    if(arr[n-1]==target){
        cout<< "element found at index: "<<n-1;
        return;
    }
    lastOccurance1(arr,n-1,target);
}

// recursion starting from last index
int lastOccurance2(int *arr,int n,int target){
    if (n==0){
        return -1;
    }
    int v = lastOccurance2(arr+1,n-1,target);
    if(v==-1)
    {
        if(arr[0]==target){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return 1 + v;
    }
}
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,4,10}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<", ";
    }
    cout<<endl;

    int target;
    cin>>target;

    lastOccurance1(arr, n, target);
    cout <<endl;
    if(lastOccurance2(arr, n, target)==-1){
        cout<< "element not found";
    }
    else{
        cout<< "element found at index: "<<lastOccurance2(arr, n, target);
    }
    cout <<endl;
    return 0;
}
