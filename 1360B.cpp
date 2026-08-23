#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int ans = 1003;
        for (int i=1; i<n; i++){
            ans = min(ans, a[i]-a[i-1]);
        }
        cout << ans << '\n';
    }
}