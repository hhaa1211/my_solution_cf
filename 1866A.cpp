#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int ans = 100005;
    while (n--){
        int x; cin >> x;
        ans = min(ans, abs(0-x));
    }
    cout << ans;
}