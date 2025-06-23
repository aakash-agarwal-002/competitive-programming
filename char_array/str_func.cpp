#include <iostream>
using namespace std;

int main() {
    char a [1000] = "apple";
    char b [1000];

    //Calc Length
    cout<<"string length a: "<<strlen(a)<<endl; //5

    //strcpy (destination, source)
    cout<<"string copying from a to b: "<<strcpy(b,a)<<endl; // b= apple
    
    //strcmp
    cout<<"string comparing between a and b: "<<strcmp(b,a)<<endl; // 0 equal
    cout<<"string comparing between a b: "<<strcmp("bananas",a)<<endl; // +1 first one is larger
    cout<<"string comparing between a b: "<<strcmp(b,"bananas")<<endl; // -1 second one is larger

    // strcat
    cout<<"string concatinating ab: "<<strcat(b,a)<<endl; //appleapple
    
    
    return 0;

}


