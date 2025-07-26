#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    if(a.length()==b.length())
        return a < b;
    else
        return a.length() < b.length();
}

// recursion O(2^n)
void subsets(vector<string> &v,char *s_in,char *s_out,int i, int j){
    if(s_in[i] == '\0'){
        s_out[j] = '\0'; // as s_out is same size as s_in but it may not be filled till end
        v.push_back(s_out);
        return;
    }
    // Exclude char at i
    subsets(v,s_in,s_out,i+1,j);

    // Include char at i
    s_out[j] = s_in[i];
    subsets(v,s_in,s_out,i+1,j+1);
}



int main() {
    char s_in[] = "abc";
    int n = strlen(s_in);
    char s_out[n+1];
    vector<string> v;
    subsets(v,s_in,s_out,0,0);
    sort(v.begin(),v.end(), compare);
    for(string s: v){
        cout<<"'"<<s<<"'"<<", ";
    }
    cout<<endl;
    return 0;
}

