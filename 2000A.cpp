#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string cs = s.substr(0, 2);
        if (cs!="10"){
            cout << "NO\n";
            continue;
        } else{
            if (s.size()-2==1){
                if (s[2]<'2'){
                    cout << "NO\n";
                } else{
                    cout << "YES\n";
                }
            } else if (s.size()-2==0){
                cout << "NO\n";
            } else{
                if (s[2]=='0'){
                    cout << "NO\n";
                } else{
                    cout << "YES\n";
                }
            }
        }
    }
}