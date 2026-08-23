#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int a[256] = {};
        bool flag = true;
        a[s[0]-'0']++;
        for (int i=1; i<n; i++){
            if (s[i]!=s[i-1] && a[s[i]-'0']){
                cout << "NO";
                flag = false;
                break;
            } 
            a[s[i]-'0']++;
        }
        if (flag){
            cout << "YES";
        }
        cout << '\n';
    }
}