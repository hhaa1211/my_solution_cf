#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a[4];
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        a[x].push_back(i);
    }
    int res = min({a[1].size(), a[2].size(), a[3].size()});
    cout << res << '\n';
    for (int i = 0; i < res; i++){
        cout << a[1][i] << ' ' << a[2][i] << ' ' << a[3][i] << '\n';
    }
}