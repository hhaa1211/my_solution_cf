#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n+1] = {};
        for (int i=1; i<=n; i++){
            int x; cin >> x;
            a[x]++;
        }
        int ans = -1;
        for (int i=1; i<=n; i++){
            if (a[i]>=3){
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }
}