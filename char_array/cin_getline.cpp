#include <iostream>
using namespace std;

int main() {
    char sentence [1000];


    // (stor value in, character count, stopping character)
    cin.getline(sentence,1000,'.');
    cout<<sentence;
    return 0;

}


