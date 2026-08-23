#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int m, a, b, c; cin >> m >> a >> b >> c;
        int m1 = (m<=a) ? 0 : m-a;
        int m2 = (m<=b) ? 0 : m-b;
        int k1 = (m<=a) ? m : a;
        int k2 = (m<=b) ? m : b;
        int m12 = m1+m2;
        int k3 = (m12<=c) ? m12 : c;
        cout << k1+k2+k3 << '\n';
    }
}