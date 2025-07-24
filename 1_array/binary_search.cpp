#include <iostream>
using namespace std;

int binarysearch(int *arr, int n, int target) {
    int i = 0, j = n - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            return mid;
        }
        else if (target < arr[mid]) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }

    cout << "Element not found" << endl;
    return -1;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter target: ";
    cin >> target;

    binarysearch(arr, n, target);

    return 0;
}
