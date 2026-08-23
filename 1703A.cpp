#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        for (char &i : s){
            i = tolower(i);
        }
        if (s=="yes"){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}