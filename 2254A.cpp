#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c; cin >> a >> b >> c;
        if (a==b || a==c || b==c){
            cout << 0 << '\n';
        } else{
            int mi = min({a, b, c});
            int ma = max({a, b, c});
            int m = a+b+c-mi-ma;
            cout << min(ma-m, m-mi) << '\n';
        }    
    }
}