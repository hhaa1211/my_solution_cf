#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int res = 1e9;
        for (int i=1; i<n; i++){
            res = min(res, a[i]-a[i-1]);
        }
        if (res<0){
            cout << 0 << '\n';
            continue;
        }
        res++;
        if (res%2){
            cout << res/2+1;
        } else{
            cout << res/2;
        }
        cout << '\n';
    }
}