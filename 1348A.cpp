#include <iostream>

using namespace std;

long long p(int a, int b){
    long long res = 1;
    for (int i=0; i<b; i++){
        res *= a;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        long long ans = p(2, n);
        for (int i=1; i<n/2; i++){
            ans += p(2, i);
        }
        for (int i=n/2; i<n; i++){
            ans -= p(2, i);
        }
        cout << ans << '\n';
    }
}