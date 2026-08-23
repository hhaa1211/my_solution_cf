#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, s, m; cin >> n >> s >> m;
        int ans = 0, p = 0;
        while (n--){
            int l, r; cin >> l >> r;
            ans = max(ans, l-p);
            p = r;
        }
        ans = max(ans, m-p);
        if (ans>=s){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}