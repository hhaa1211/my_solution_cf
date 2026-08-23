#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int p = 1;
        while (p*2<=n){
            p *= 2;
        }
        cout << p-1 << '\n';
    }
}