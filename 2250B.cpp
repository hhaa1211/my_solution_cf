#include <iostream>
#include <deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int s1 = k/2;
        int s0 = k-s1;
        int tmp = s1+s0+2;
        if (tmp>n){
            cout << -1;
        } else{
            deque<char> ans;
            for (int i=0; i<s1+1; i++){
                ans.push_back('1');
            }
            for (int i=0; i<s0+1; i++){
                ans.push_back('0');
            }
            while (ans.size()<n){
                ans.push_back('1');
                ans.push_back('0');
            }
            s1 = 0; s0 = 0;
            for (int i=0; i<n; i++){
                if (ans[i]=='0'){
                    s0++;
                } else{
                    s1++;
                }
            }
            if (s1-s0>1){
                cout << -1;
            } else{
                for (int i=0; i<n; i++){
                    cout << ans[i];
                }
            }
        }
        cout << '\n';
    }
}