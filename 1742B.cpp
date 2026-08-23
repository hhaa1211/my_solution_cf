#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int &i : a) cin >> i;
        sort(a, a+n);
        int flag = 1;
        for (int i=1; i<n; i++){
            if (a[i]==a[i-1]){
                flag = 0;
                break;
            }
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
}