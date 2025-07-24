#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<vector<int>> vec1 = {{1,2,3}, {4,5, 6}, {7, 8, 9, 10}, {11, 12}};

   for(int i=0;i< vec1.size();i++){
       for (int num : vec1[i]) {
           cout << num << " ";
       }
       cout<<endl;
   } 
   cout <<endl;

   // fill constructor: vector<vector<int>> matrix(rows, vector<int>(cols, initial_value));
   vector<vector<int>> vec2(3, vector<int>(4, 7));

   for(vector<int> row: vec2){
       for (int num : row) {
           cout << num << " ";
       }
       cout<<endl;
   } 
      
   cout <<endl;
   return 0;
}
