#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n]; 
        for (int &i : a) cin >> i;
        int cur = 0, res = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == 0){
                cur++;
                res = max(res, cur);
            } else {
                cur = 0;
            }
        }
        cout << res << endl;
    }
}