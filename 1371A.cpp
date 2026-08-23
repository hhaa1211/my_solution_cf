#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if (n%2){
            cout << n/2+1;
        } else{
            cout << n/2;
        }
        cout << '\n';
    }
}