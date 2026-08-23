#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int l, r; cin >> l >> r;
        int a = l, b = l*2;
        if (b>r){
            cout << -1 << ' ' << -1;
        } else{
            cout << a << ' ' << b;
        }
        cout << '\n';
    }
}