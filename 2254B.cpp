#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<char> c;
        vector<int> l;
        for (int i=0; i<n; ){
            c.push_back(s[i]);
            int j = 1;
            while (i+j<n && s[i+j]==s[i]) j++;
            i += j;
            l.push_back(j);
        } 
        int sub = 0;
        for (int i=1; i<c.size()-1; i++){
            if (l[i]==1){
                if (c[i-1]==c[i+1]){
                    sub = max(sub, 2);
                } else{
                    sub = max(sub, 1);
                }
            }
        }
        cout << c.size()-sub << '\n';
    }
}