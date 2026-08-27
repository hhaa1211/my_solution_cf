#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, a, b; cin >> n >> a >> b;
        if (a+b+2<=n){
            cout << "YES";
        } else if (n==a && a==b){
            cout << "YES";
        } else{
            cout << "NO";
        }
        cout << '\n';
    }
}