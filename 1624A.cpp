#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ma_val = 1, mi_val = 1000000009;
        while (n--){
            int x; cin >> x;
            ma_val = max(x, ma_val);
            mi_val = min(x, mi_val);
        }
        cout << ma_val-mi_val << '\n';
    }
}