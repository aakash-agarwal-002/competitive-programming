#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<int> numbers; // create an empty vector of integers

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access and print elements
    for (int num : numbers) {
       cout << num << " ";
    }
    cout <<endl;

    return 0;
}

// Vectors are sequence containers representing arrays that can
// change in size.
// Just like arrays, vectors use contiguous storage locations for
// their elements, which means that their elements can also be
// accessed directly in O(1) time.
// But unlike arrays, their size can change dynamically, with their
// storage being handled automatically by the container.

