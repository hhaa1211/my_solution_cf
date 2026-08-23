#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string res = "";
        for (int i=s.size()-1; i>=0; i--){
            if (s[i]=='p'){
                res += 'q';
            } else if (s[i]=='q'){
                res += 'p';
            } else{
                res += 'w';
            }
        }
        cout << res << '\n';
    }
}