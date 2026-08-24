#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int k; cin >> k;
        if (k%2){
            cout << "YES";
        } else{
            cout << "NO";
        }
        cout << '\n';
    }
}