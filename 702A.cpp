#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans = 1, ma_ans = 1;
    for (int i=1; i<n; i++){
        if (a[i]>a[i-1]){
            ans++;
        } else{
            ans = 1;
        }
        ma_ans = max(ans, ma_ans);
    }
    cout << ma_ans;
}