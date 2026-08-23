#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int so_1 = 0, so_2 = 0;
        while (n--){
            int x; cin >> x;
            (x==1) ? so_1++ : so_2++;
        }
        int tong = so_1*1+so_2*2;
        if (tong%2==0 && (so_2%2==0 || so_1>=2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}