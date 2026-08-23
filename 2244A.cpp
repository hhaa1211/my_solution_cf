#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int res = 0;
        for (int i=0; i<n;){
            if (s[i]=='#'){
                int cur_res = 0;
                while (i<n && s[i]=='#'){
                    cur_res++;
                    i++;
                }
                res = max(cur_res, res);
                continue;
            }
            i++;
        }
        if (res%2){
            cout << res/2+1 << '\n';
        } else{
            cout << res/2 << '\n';
        }
    }
}