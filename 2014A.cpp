#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int rb = 0;
        int ans = 0;
        for (int i=0; i<n; i++){
            if (a[i]==0){
                if (rb!=0){
                    ans++;
                    rb--;
                }
            } else{
                if (a[i]>=k){
                    rb += a[i];
                }
            }
        }
        cout << ans << '\n';
    }
}