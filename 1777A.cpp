#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n]; 
        for (int i = 0; i<n; i++){
            cin >> a[i];
        }
        int ans = 0;
        for (int i=0; i<n; ){
            if (a[i]%2){
                int j = 1;
                while (i+j<n && a[i+j]%2) j++;
                ans += j-1;
                i += j;
            } else{
                int j= 1;
                while (i+j<n && a[i+j]%2==0) j++;
                ans += j-1;
                i += j;
            }
        }
        cout << ans << '\n';
    }
}