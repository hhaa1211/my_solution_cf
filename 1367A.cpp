#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while (n--){
        string s; cin >> s;
        string res = "";
        res += s[0];
        for (int i=1; i<s.length()-1; i+=2){
            res += s[i];
        }
        res += s[s.length()-1];
        cout << res << endl;
    }
}