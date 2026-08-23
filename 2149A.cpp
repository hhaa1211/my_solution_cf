#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int c0 = 0, ca1 = 0;
        while (n--){
            int x; cin >> x;
            if (x==0){
                c0++;
            } else if (x==-1){
                ca1++;
            }
        }
        int ans = c0;
        if (ca1%2){
            ans += 2;
        }
        cout << ans << '\n';
    }
}