#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int n, m; cin >> n >> m;
    int ans = 0;
    for (int i=0; i<=min(n, m); i++){
        for (int j=0; j<=min(n, m); j++){
            if (i*i+j==n && i+j*j==m){
                ans++;
            }
        }
    }
    cout << ans;
}