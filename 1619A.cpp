#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s.length()%2){
            cout << "NO\n";
            continue;
        }
        string res1 = "";
        for (int i=0; i<s.length()/2; i++){
            res1 += s[i];
        }
        string res2 = "";
        for (int i=s.length()/2; i<s.length(); i++){
            res2 += s[i];
        }
        if (res1==res2){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }    
}