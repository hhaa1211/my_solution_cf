#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        string s2; cin >> s2;
        bool flag = true;
        for (int i=0; i<n; i++){
            if (s[i]=='R' && s2[i]!='R' || s2[i]=='R' && s[i]!='R'){
                flag = false;
                break;
            }
        }
        if (flag){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}