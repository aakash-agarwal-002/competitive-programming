#include <iostream>
using namespace std;

// worst case complexity O(n)
void linearSearch(int *arr, int n, int target){
    for (int i=0;i<n;i++){
        if (arr[i]==target){
            cout<<"element found: "<<arr[i]<<" and at location: "<<i+1<<endl;
            return;
        }
    }
    cout<<"element not found"<<endl;
    return;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof(arr)/4;
    int target;

    cin>>target;

    linearSearch(arr,n,target);

    cout<<"\n";

    return 0;
}