#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ans = 1;
        while (n--){
            int x; cin >> x;
            ans = max(ans, x);
        }
        cout << ans << '\n';
    }
}