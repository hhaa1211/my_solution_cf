#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while (n--){
        int a, b, c; cin >> a >> b >> c;
        int res = a+b+c-min({a, b, c})-max({a, b, c});
        cout << res << endl;
    }
}