#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ans = 0;
        while (n--){
            int x; cin >> x;
            if (x<0){
                ans -= x;
            } else{
                ans += x;
            }
        }
        cout << ans << '\n';
    }
}