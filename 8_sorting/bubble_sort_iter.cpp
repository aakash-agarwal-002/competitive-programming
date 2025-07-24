
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[10] = {7,8,4,10,1,2,3,4,5,6}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<", ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout <<endl<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<", ";
    }
    cout <<endl;

    return 0;
}
