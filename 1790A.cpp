#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        s += '#';
        for (int i=1; i<=s.size(); i++){
            if (pi[i-1]!=s[i-1]){
                cout << i-1 << '\n';
                break;
            }
        }
    }
}