#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int cb = 0;
        for (int i=0; i<n; i++){
            if (s[i]=='B'){
                cb++;
            }
        }
        int ans = 0;
        for (int i=0; i<n; ){
            if (s[i]=='B'){
                ans++;
                for (int j=0; j<k; j++){
                    if (i+j<n && s[i+j]=='B'){
                        cb--;
                    }
                }
                i += k;
            } else{
                i++;
            }
        }
        cout << ans << '\n';
    }
}