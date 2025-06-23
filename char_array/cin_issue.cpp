#include <iostream>
using namespace std;

int main() {
    char arr[50];
    // cin stops at first white space or \n
    // cin>>arr; // helloworld -> helloworld, hello world -> hello
    // cout<<arr;

    // use cin.get() instead

    char sentence [1000];
    int len = 0;
    char temp = cin.get();
    while(temp != '\n'){
        sentence[len++] = temp;
        temp = cin.get();
    }

    sentence[len] = '\0'; // to stop reading garbage values
    cout<<sentence;
    return 0;

}


