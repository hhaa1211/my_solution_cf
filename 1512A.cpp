#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n]; 
        for (int &i : a) cin >> i;
        int res1[3] = {a[0], 1, 1}, res2[3] = {0, 0, 0};
        for (int i=1; i<n; i++){
            if (a[i]==res1[0]){
                res1[1]++;
            } else{
                if (res2[0]==0){
                    res2[0] = a[i];
                }
                res2[1]++;
                res2[2] = i+1;
            }
        }
        if (res1[1]==1){
            cout << res1[2] << "\n";
        } else{
            cout << res2[2] << "\n";
        }
    }
}