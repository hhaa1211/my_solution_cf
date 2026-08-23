#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;
        int pre_ans = a+b+c-min({a, b, c});
        if (pre_ans>=10){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}