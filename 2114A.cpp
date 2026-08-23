#include <iostream>
#include <cmath>

using namespace std;

bool c(int n){
    int sqn = sqrt(n);
    return sqn*sqn==n;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if (c(n)){
            cout << 0 << ' ' << sqrt(n) << '\n';
        } else{
            cout << -1 << '\n';
        }
    }
}