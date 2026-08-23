#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int cA = 0, cB = 0, cC = 0;
        for (char i : s){
            if (i=='A'){
                cA++;
            } else if (i=='C'){
                cC++;
            } else{
                cB++;
            }
        }
        if (cA+cC==cB){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}