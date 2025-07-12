#include <iostream>
using namespace std;

int main() {

    char sentence [1000];
    cout<<"Enter number of sentence"<<endl;
    int n=0;
    cin>>n;
    cin.get(); // it is used to read "extra \n" enter while taking n to avoid issues with cin.getline()

    int len_largest = 0;
    char largest_sentence[1000];
    while(n-->0){
        cin.getline(sentence,1000);
        int len= strlen(sentence);
        if (len > len_largest){
            len_largest = len;
            strcpy(largest_sentence,sentence);
        }   
    }


    cout<<"Largest sentence is: "<<largest_sentence<<" and its length is "<<len_largest<<endl;
    return 0;

}


