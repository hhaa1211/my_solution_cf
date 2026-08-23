#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; 
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        string ans = "";
        while (ss >> tmp){
            ans += tmp[0];
        }
        cout << ans << '\n';
    }
}