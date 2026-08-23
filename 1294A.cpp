#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        long long sum = a+b+c+n;
        if ((sum%3==0) && (sum/3>=max({a, b, c}))){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}