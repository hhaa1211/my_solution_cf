#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        for (int i=1; i<=8; i++){
            if (i!=(s[1]-'0')){
                cout << s[0] << i << '\n';
            }
        }
        for (int i=0; i<8; i++){
            if ((char)(i+'a')!=s[0]){
                cout << (char)(i+'a') << s[1] << '\n';
            }
        }
    }
}