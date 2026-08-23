#include <iostream> 
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int i = s.length();
        if (i<6){
            cout << "NO\n";
            continue;
        }
        int sum_f = (s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        int sum_l = (s[i-1]-'0')+(s[i-2]-'0')+(s[i-3]-'0');
        if (sum_f==sum_l){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}