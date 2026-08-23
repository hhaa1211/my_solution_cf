#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int arr_mi, arr_ma;
    int a1; cin >> a1;
    arr_mi = a1; arr_ma = a1;
    int res = 0;
    while (--n){
        int x; cin >> x;
        if (x>arr_ma){
            res++;
            arr_ma = x;
        } else if (x<arr_mi){
            res++;
            arr_mi = x;
        }
    }
    cout << res;
}