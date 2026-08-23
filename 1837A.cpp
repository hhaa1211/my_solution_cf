#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        if (n%x){
            cout << 1 << '\n' << n;
        } else{
            cout << 2 << '\n' << abs(n-1) << ' ' << 1;
        }
        cout << '\n';
    }
}