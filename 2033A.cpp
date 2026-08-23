#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if (n%2){
            cout << "Kosuke\n";
        } else{
            cout << "Sakurako\n";
        }
    }
}