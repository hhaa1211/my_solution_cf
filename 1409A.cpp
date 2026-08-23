#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        int sab = abs(b-a);
        int res;
        if (sab%10){
            res = sab/10+1;
        } else{
            res = sab/10;
        }
        cout << res << "\n";
    }
}