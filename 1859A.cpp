#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n]; 
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int res = -1;
        for (int i=1; i<n; i++){
            if (a[i]>a[i-1]){
                res = i;
                break;
            }
        }
        if (res==-1){
            cout << -1;
        } else{
            cout << res << ' ' << n-res << '\n';
            for (int i=0; i<res; i++){
                cout << a[i] << ' ';
            }
            cout << '\n';
            for (int i=res; i<n; i++){
                cout << a[i] << ' ';
            }
        }
        cout << '\n';
    }
}