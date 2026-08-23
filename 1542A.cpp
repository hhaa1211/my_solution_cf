#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sl = 0, sc = 0;
        for (int i=0; i<2*n; i++){
            int x; cin >> x;
            if (x%2){
                sl++;
            } else{
                sc++;
            }
        }
        if (sl==sc){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}