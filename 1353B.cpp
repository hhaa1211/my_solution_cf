#include <iostream>
#include <algorithm>

using namespace std;

bool cp(int a, int b){
    return a>b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int b[n];
        for (int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, cp);
        for (int i=0; i<k; i++){
            if (a[i]<b[i]){
                swap(a[i], b[i]);
            } else{
                break;
            }
        }
        int ans = 0;
        for (int i=0; i<n; i++){
            ans += a[i];
        }
        cout << ans << '\n';
    }
}