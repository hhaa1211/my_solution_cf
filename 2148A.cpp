#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int x, n; cin >> x >> n;
        if (n%2){
            cout << x << '\n';
        } else{
            cout << 0 << '\n';
        }
    }
}