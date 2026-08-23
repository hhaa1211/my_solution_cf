#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if (n%2){
            for (int i=0; i<n; i++){
                int x; cin >> x;
            }
            cout << "NO\n";
            continue;
        }
        int mn = 1000000009, mx = 1;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            if (i%2==0){
                mn = min(mn, x);
            } else{
                mx = max(mx, x);
            }
        }
        if (mn>mx+1){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}