#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        bool flag = false;
        for (int i=1; i<s.size(); i++){
            if (s[i]==s[i-1]){
                flag = true;
                break;
            }
        }
        if (flag){
            cout << 1 << '\n';
        } else{
            cout << s.size() << '\n';
        }
    }
}