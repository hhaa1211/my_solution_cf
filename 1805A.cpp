#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ans = 0;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            ans = ans^x;
        }
        if (n%2){
            cout << ans;
        } else{
            if (ans==0){
                cout << 1;
            } else{
                cout << -1;
            }
        }
        cout << '\n';
    }
}