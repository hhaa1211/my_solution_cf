#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int ans = max(n, m)/2*min(n, m);
        if (max(n, m)%2){
            ans += (min(n, m)%2) ? min(n, m)/2+1 : min(n, m)/2;
        }
        cout << ans << '\n';
    }
}