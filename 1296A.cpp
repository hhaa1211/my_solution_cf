#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sc = 0, sl = 0;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            if (x%2){
                sl++;
            } else{
                sc++;
            }
        }
        if (n%2){
            if (sc==n){
                cout << "NO\n";
            } else{
                cout << "YES\n";
            }
        } else{
            if (sc==n || sl==n){
                cout << "NO\n";
            } else{
                cout << "YES\n";
            }
        }
    }
}