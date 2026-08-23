#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        string sn, sm; cin >> sn >> sm;
        int ans = 0;
        bool flag = 0;
        for (int i=0; i<=5; i++){
            if (sn.find(sm)!=string::npos){
                cout << ans;
                flag = 1;
                break;
            }
            sn += sn;
            ans++;
        }
        if (!flag){
            cout << -1;
        }
        cout << '\n';
    }
}