#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        int a[n]; 
        for (int &i : a){
            cin >> i;
        }
        int res = a[0];
        for (int i=1; i<n; i++){
            res = max(res, a[i]-a[i-1]);
        }
        res = max(res, (x-a[n-1])*2);
        cout << res << endl;
    }
}