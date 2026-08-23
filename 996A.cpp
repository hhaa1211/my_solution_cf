#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[5] = {100, 20, 10, 5, 1};
    int res = 0;
    for (int i = 0; i < 5; i++){
        res += n / a[i];
        n %= a[i];
    }
    cout << res;
}