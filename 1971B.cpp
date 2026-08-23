#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sl(string s){
    string tmp = s;
    for (int i=0; i<s.size(); i++){
        for (int j=0; j<s.size(); j++){
            swap(tmp[i], tmp[j]);
            if (tmp!=s){
                return tmp;
            }
        }
    }
    return "NO";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string res = sl(s);
        if (res!="NO"){
            cout << "YES\n";
            cout << res;
        } else{
            cout << res;
        }
        cout << '\n';
    }
}