#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int x, y, n; cin >> x >> y >> n;
        if (n%x==y){
            cout << n;
        } else{
            int mod_n = n%x;
            if (mod_n>y){
                cout << n-(n%x)+y;
            } else{
                int res = n-(n%x)-(x-y);
                if (res>0){
                    cout << res;
                } else{
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
}