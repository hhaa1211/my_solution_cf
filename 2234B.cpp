#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palin(long long a){
    string s = to_string(a);
    string t = s;
    reverse(t.begin(), t.end());
    return s==t;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        int flag = 0;
        long long a, b;
        for (int i=0; i<=5000; i++){
            b = 12LL*i;
            if (b>n) break;
            a = n-b;
            if (palin(a)){
                flag = 1;
                break;
            }
        }
        if (flag){
            cout << a << ' ' << b << endl;
        } else{
            cout << -1 << endl;
        }
    }
}