#include <iostream>
#include<string>
using namespace std;

int main() {

    string s; // auto \0 terminated
    getline(cin,s); // stop at \n
    cout<<s<<endl;
    getline(cin,s,'.'); // stop at . (accepts multiline input)
    cout<<s<<endl;

    // string is iterable like array
    for(char c:s){
        cout<<c<<", ";
    }
    return 0;

}


