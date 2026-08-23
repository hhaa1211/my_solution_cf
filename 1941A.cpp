#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, m, k; cin >> n >> m >> k;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int b[m];
        for (int i=0; i<m; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+m);
        int ans = 0;
        for (int i=0; i<n; i++){
            if (a[i]>=k){
                break;
            }
            int tar = k-a[i];
            int j = upper_bound(b, b+m, tar)-b;
            ans += j;
        }
        cout << ans << '\n';
    }
}