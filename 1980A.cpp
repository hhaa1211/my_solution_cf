#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        string s; cin >> s;
        int a[7] = {0};
        for (char i : s){
            a[i-'A']++;
        }
        int ans = 0;
        for (int i : a){
            if (i<m){
                ans += m-i;
            }
        }
        cout << ans << '\n';
    }
}