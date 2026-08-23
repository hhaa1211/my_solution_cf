#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string a; cin >> a;
        int res = (a[0]-'0')+(a[1]-'0');
        cout << res << endl;
    }
}