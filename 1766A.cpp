#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        int ans = (n.size()-1)*9+(n[0]-'0');
        cout << ans << '\n';
    }
}