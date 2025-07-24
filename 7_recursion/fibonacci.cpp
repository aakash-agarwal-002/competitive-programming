
#include <iostream>
#include <vector>

using namespace std;

// fibonacci O(n), 0,1,2,3,5,8,13,21...
int fibonacci(int n){
    if(n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
   int n;
   cin>>n;

   cout<<n<<"th fibonacci number is: "<<fibonacci(n);
   cout <<endl;
   return 0;
}
