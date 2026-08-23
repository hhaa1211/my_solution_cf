#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n], b[n];
        int mna = 1000000009, mnb = 1000000009;
        long long ans = 0;
        for (int i=0; i<n; i++){
            cin >> a[i];
            mna = min(mna, a[i]);
        }
        for (int i=0; i<n; i++){
            cin >> b[i];
            mnb = min(mnb, b[i]);
        }
        for (int i=0; i<n; i++){
            if (a[i]>mna && b[i]>mnb){
                int c = min(a[i]-mna, b[i]-mnb);
                ans += c+a[i]-c-mna+b[i]-c-mnb;
            } else{
                ans += a[i]-mna+b[i]-mnb;
            }
        }
        cout << ans << '\n';
    }
    
}