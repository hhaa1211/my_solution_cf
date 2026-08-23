#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c; cin >> a >> b >> c;
        if (a>b){
            swap(a, b);
        }
        int ans = b-a;
        if (ans==0){
            cout << ans;
        } else if (ans>c){
            cout << ((ans%(2*c)) ? (ans/(2*c)+1) : (ans/(2*c)));
        } else{
            cout << 1;
        }
        cout << '\n';
    }
}