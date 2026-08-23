#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int res = 0, cur = 0, flag = 0;
        for (int i=0; i<n; i++){
            if (s[i]=='.'){
                cur++;
                res++;
            } else{
                cur = 0;
            }
            if (cur==3){
                flag = 1;
                break;
            } 
        }
        if (flag){
            cout << 2 << endl;
        } else{
            cout << res << endl;
        }
    }
}