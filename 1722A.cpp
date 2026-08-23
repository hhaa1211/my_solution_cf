#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        if (n != 5){
            cout << "NO\n";
            continue;
        }
        string tar = "Timur";
        sort(s.begin(), s.end());
        sort(tar.begin(), tar.end());

        if (s == tar){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}