#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << 2 << ' ';
        for (int i=1; i<n-1; i++){
            cout << i+2 << ' ';
        }
        cout << 1 << '\n';
    }
}