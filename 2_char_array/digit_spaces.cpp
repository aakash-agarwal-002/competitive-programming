#include <iostream>
using namespace std;


// Given a sentence, count the number of alphabets, digits & spaces in the sentence
int main() {
    char arr[50];
    int digit=0;
    int alpha=0;
    int spaces=0;
    char ch = cin.get();

    while (ch != '\n')
    {   
        if((ch>='0' && ch<='9'))
            digit++;
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            alpha++;
        if((ch==' ' || ch=='\t'))
            spaces++;
        ch = cin.get();
    }

    cout<<"Total Digits "<<digit<<endl;
    cout<<"Total Alphabets "<<alpha<<endl;
    cout<<"Total Spaces "<<spaces<<endl;
    return 0;
}



