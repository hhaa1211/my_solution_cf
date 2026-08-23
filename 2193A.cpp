#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, s, x; cin >> n >> s >> x;
        int tt = 0;
        while (n--){
            int x; cin >> x;
            tt += x;
        }
        int st = s-tt;
        if (st<0){
            cout << "NO\n";
        } else{
            if (st%x){
                cout << "NO\n";
            } else{
                cout << "YES\n";
            }
        }
    }
}