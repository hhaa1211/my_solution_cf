#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k, m;
        cin >> n >> k >> m;
        if (k>m){
            cout << "NO\n";
        } else{
            cout << "YES\n";
            for (int i=0; i<k-1; i++){
                cout << 1 << ' ';
            }
            cout << m-(k-1) << ' ';
            for (int i=k; i<n; i++){
                cout << 1 << ' ';
            }
            cout << '\n';
        }
    }
}