#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int a[d+1] = {0};
    for (int i=k; i<=d; i+=k){
        a[i]++;
    }
    for (int i=l; i<=d; i+=l){
        a[i]++;
    }
    for (int i=m; i<=d; i+=m){
        a[i]++;
    }
    for (int i=n; i<=d; i+=n){
        a[i]++;
    }
    int res = 0;
    for (int i=1; i<=d; i++){
        if (a[i]){
            res++;
        }
    }
    cout << res;
}