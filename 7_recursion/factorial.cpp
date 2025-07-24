
#include <iostream>
#include <vector>

using namespace std;

// recursion O(n)
int factorial(int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
}

int main() {
   int n;
   cin>>n;

   cout<<"factorial of "<<n<<" is: "<<factorial(n);
   cout <<endl;
   return 0;
}
