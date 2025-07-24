
#include <iostream>
#include <vector>

using namespace std;

// recursion O(n)
void increasing(int n){
    if(n==0)
        return;
    increasing(n-1);
    // statement after recursive call is executed coming from base case
    cout << n<<", ";
}

void decreasing(int n){
    if(n==0)
        return;
    // statement before recursive call is executed goings towards base case
    cout<<n<<", ";
    decreasing(n-1);
}

int main() {
   int n;
   cin>>n;

   increasing(n);
   cout <<endl;
   decreasing(n);
   cout <<endl;
   return 0;
}
