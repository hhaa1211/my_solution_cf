#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        if (n==1){
            cout << 0;
        } else{
            cout << min(2, n-1)*m;
        }
        cout << '\n';
    }
}