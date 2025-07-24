#include <iostream>
#include <vector>

using namespace std;

// Vectors are sequence containers representing arrays that can change in size.
// Just like arrays, vectors use contiguous storage locations for their elements, 
// which means that their elements can also be accessed directly in O(1) time. 
// But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.


int main() {
   vector<int> vec1; // create an empty vector of integers

   vec1.push_back(10); // push element
   vec1.pop_back(); // pop element
   vec1.push_back(20);
   
   for (int num : vec1) {
      cout << num << " ";
   }
   cout <<endl;
   
   vector<int> vec2(10, 7); // vector using fill constructor size =10 each filled with 7

   for (int num : vec2) {
       cout << num << " ";
   }
      
   cout <<endl;
   return 0;
}
