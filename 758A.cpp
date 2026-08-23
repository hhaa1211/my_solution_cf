#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; 
    int ma_a = 0;
    for (int &i : a){
        cin >> i;
        ma_a = max(ma_a, i);
    }
    int res = 0;
    for (int i : a){
        res += ma_a-i;
    }
    cout << res;
}