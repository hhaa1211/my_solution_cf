#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n]; 
        int sum = 0, ami = 10000007;
        for (int i=0; i<n; i++){
            cin >> a[i];
            ami = min(ami, a[i]);
        }
        for (int i=0; i<n; i++){
            sum += a[i]-ami;
        }
        cout << sum << '\n';
    }
}