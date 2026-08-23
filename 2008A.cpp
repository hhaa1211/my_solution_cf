#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        if (b%2){
            a -= 2;
        }
        if (a<0){
            cout << "NO\n";
        } else{
            if (a%2){
                cout << "NO\n";
            } else{
                cout << "YES\n";
            }
        }
    }
}