#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        int pa[n] = {};
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        if (a[0]==2){
            pa[0] = 1;
        } 
        for (int i=1; i<n; i++){
            if (a[i]==2){
                pa[i] = pa[i-1]+1;
            } else{
                pa[i] = pa[i-1];
            }
        }
        int ans = -1;
        for (int k=1; k<n; k++){
            if (pa[k-1]==pa[n-1]-pa[k-1]){
                ans = k;
                break;
            }
        }
        cout << ans << '\n';
    }
}