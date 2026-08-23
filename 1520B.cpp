#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        int ans = (n.size()-1)*9;
        string tmp = "";
        for (int i=0; i<n.size(); i++){
            tmp += '1';
        }
        int t = stoi(tmp);
        int sum = 0;
        while (sum+t<=stoi(n)){
            sum += t;
            ans++;
        }
        cout << ans << '\n';
    }
}