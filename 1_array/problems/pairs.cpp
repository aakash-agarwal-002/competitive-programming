/*
Given an array containing N integers, and an number S denoting a target sum.
Find two distinct integers that can pair up to form target sum. Let us assume there will be only one such pair.

Input: array = [10, 5, 2, 3, -6, 9, 11 ] and S = 4
Output: [10, -6]
*/

#include <iostream>
#include <vector>

using namespace std;


vector<int> brutePairVector(vector<int> &vec, int size, int target){ // O(n^2)
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        if (vec[i]+vec[j]==target){
            return {i,j};
        }
    }
   }
   return {-1, -1};
}

int main() {
   vector<int> vec = {10, 5, 2, 3, -6, 9, 11 }; 
   int target;
   cin>>target;

   for (int num : brutePairVector(vec,vec.size(),target)) {
        if (num != -1)
            cout <<"index: "<<num<< " value: "<< vec[num]<<endl;
        else
            {
                cout<< "No target sum exists";
                break;
            }
   }
      
   cout <<endl;
   return 0;
}
