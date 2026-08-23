#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        float n, x, y, z;
        cin >> n >> x >> y >> z;
        int res = min(ceil(n/(x+y)), ceil((n+10*y*z)/(x+10*y)));
        cout << res << endl;
    }
}