#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int q; cin >> q;
    while (q--){
        int n; cin >> n;
        string s; cin >> s;
        string s1; cin >> s1;
        sort(s.begin(), s.end());
        sort(s1.begin(), s1.end());
        if (s==s1){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}