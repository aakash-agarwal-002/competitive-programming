#include <iostream>
#include <vector>
#include <string>

using namespace std;

// recursion O(2^n)
void subsets(vector<string> &v,string &s_in,string s_out,int i){
    if(s_in.length() == i){
        v.push_back(s_out);
        return;
    }
    subsets(v,s_in,s_out + s_in[i],i+1);
    subsets(v,s_in,s_out,i+1);
}



int main() {
    string s_in = "abc";
    string s_out="";
    vector<string> v;
    subsets(v,s_in,s_out,0);
    for(string s: v){
        cout<< s<<", ";
    }
    cout<<endl;
    return 0;
}
