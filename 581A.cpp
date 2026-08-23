#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int a, b; cin >> a >> b;
    int res_a = min(a, b);
    int res_b = (max(a, b)-res_a)/2;
    cout << res_a << ' ' << res_b;
}