#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sl = 0;
        while (n--){
            int x; cin  >> x;
            if (x%2){
                sl++;
            }
        }
        if (sl%2){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    }
}