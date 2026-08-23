#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n]; 
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        if (is_sorted(a, a+n) || k>1){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}