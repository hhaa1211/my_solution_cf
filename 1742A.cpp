#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;
        if (max({a, b, c})==a+b+c-max({a, b, c})){
            cout << "YES";
        } else{
            cout << "NO";
        }
        cout << endl;
    }
}