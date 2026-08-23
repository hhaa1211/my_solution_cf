#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c; cin >> a >> b >> c;
        int a1 = a-1, b1 = (c<b) ? (b-1) : (c-b+c-1);
        if (a1<b1){
            cout << 1;
        } else if (a1>b1){
            cout << 2;
        } else{
            cout << 3;
        }
        cout << '\n';
    }
}