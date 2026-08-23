#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int ans = 0;
    for (int i=1; i<=n; i++){
        if (n%i==0 && n/i>=2){
            ans++;
        }
    }
    cout << ans;
}