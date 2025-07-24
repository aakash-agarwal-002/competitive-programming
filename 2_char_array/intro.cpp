#include <iostream>
using namespace std;

int main() {
    char arr[50];

    for(int i=0;i<50;i++){
        cout<<arr[i]<<", ";
    }

    cout<<endl;
    
    char arr1[] = {'a', 'b', 'c','d','e','f'}; // incorrect way prints garbage values

    cout<<arr1<<endl;
    cout<<"length: "<<strlen(arr1)<<" size: "<<sizeof(arr1)<<endl; // length: 9 size: 6

    char arr2[] = {'a', 'b', 'c', '\0'}; // correct way

    cout<<arr2<<endl;
    cout<<"length: "<<strlen(arr2)<<" size: "<<sizeof(arr2)<<endl; // length: 3 size: 4

    char arr3[] = "abc"; // // automatically add null character and doesn't prints garbage values

    cout<<arr3<<endl;
    cout<<"length: "<<strlen(arr3)<<" size: "<<sizeof(arr3)<<endl; // length: 3 (does not include null character) size: 4

    return 0;

}
