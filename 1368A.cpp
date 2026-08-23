#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, n; cin >> a >> b >> n;
        if (b<a){
            swap(a, b);
        }
        int ans = 0;
        while (a<=n && b<=n){
            ans++;
            if (ans%2){
                a += b;
            } else{
                b += a;
            }
        }
        cout << ans << '\n';
    }
}