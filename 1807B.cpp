#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sumc = 0, suml = 0;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            if (x%2){
                suml += x;
            } else{
                sumc += x;
            }
        }
        if (sumc>suml){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}