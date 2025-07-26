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
void permutation(vector<string> &v,char *s_in,int l,int r){

    if (l == r) {
        v.push_back(string(s_in));
        return;
    }
    
    for(int i=l;i<=r;i++){
        swap(s_in[l],s_in[i]);
        permutation(v,s_in,l+1, r);
        swap(s_in[l],s_in[i]);
    }
}

void permutation2(vector<string>& v, char* s_in, int l, int r, int i) {
    if (l == r) {
        v.push_back(string(s_in));
        return;
    }

    if (i > r) {
        return;
    }
    
    swap(s_in[l], s_in[i]);
    permutation2(v, s_in, l + 1, r, l + 1);
    swap(s_in[l], s_in[i]);
    permutation2(v, s_in, l, r, i + 1);
}




int main() {
    char s_in[] = "abc";
    int n = strlen(s_in);
    vector<string> v;

    permutation(v, s_in, 0, n - 1);
    
    sort(v.begin(), v.end(), compare);

    for (const string& s : v) {
        cout << "'" << s << "', ";
    }
    cout << endl;
    v = {};
    permutation2(v, s_in, 0, n - 1,0);
    
    sort(v.begin(), v.end(), compare);

    for (const string& s : v) {
        cout << "'" << s << "', ";
    }
    cout << endl;

    return 0;
}
