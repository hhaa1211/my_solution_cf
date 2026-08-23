#include <iostream>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        pair<int, int> a[n];
        for (int i=0; i<n; i++){
            cin >> a[i].first >> a[i].second;
        }
        int res = -1, ma_res = 0;
        for (int i=0; i<n; i++){
            if (a[i].first<=10){
                if (a[i].second>ma_res){
                    res = i+1;
                    ma_res = a[i].second;
                }
            }
        }
        cout << res << '\n';
    }  
}