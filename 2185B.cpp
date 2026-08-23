#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ma_a = 1;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            ma_a = max(x, ma_a);
        }
        cout << ma_a*n << '\n';
    }
}