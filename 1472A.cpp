#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int w, h, n; cin >> w >> h >> n;
        int ans = 1;
        while (w%2==0 || h%2==0){
            if (w%2==0){
                w /= 2;
                ans *=2;
            }
            if (h%2==0){
                h /= 2;
                ans *= 2;
            }
        }
        if (ans>=n){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}