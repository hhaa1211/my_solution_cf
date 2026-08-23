#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sd = 0, sa = 0;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            if (x<0){
                sa++;
            } else{
                sd++;
            }
        }
        if (sa>sd){
            int ans;
            if ((sa-sd)%2){
                ans = (sa-sd)/2+1;
            } else{
                ans = (sa-sd)/2;
            }
            if ((sa-ans)%2){
                ans++;
            }
            cout << ans;
        } else{
            if (sa%2){
                cout << 1;
            } else{
                cout << 0;
            }
        }
        cout << '\n';
    }
}