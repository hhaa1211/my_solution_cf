#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        char i = 'a';
        for (char j : s){
            if (j>i){
                i = j;
            }
        }
        cout << i-'a'+1 << '\n';
    }
}