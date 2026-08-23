#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    string c; cin >> c;
    int ans = 1;
    for (int i=0; i<c.size(); i++){
        if (c[i]==s[ans-1]){
            ans++;
        }
    }
    cout << ans;
}