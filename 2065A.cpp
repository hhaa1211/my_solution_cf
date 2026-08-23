#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s.size()==1){
            cout << "us";
        } else if(s.size()==2){
            cout << "i"; 
        } else{
            if (s[s.size()-1]=='i'){
                s[s.size()-1] = 'u';
                s += 's';
                cout << s;
            } else{
                s[s.size()-2] = 'i';
                s[s.size()-1] = ' ';
                cout << s;
            }
        }
        cout << '\n';
    }
}