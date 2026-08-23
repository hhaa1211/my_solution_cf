#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string a; cin >> a;
        int m; cin >> m;
        string b; cin >> b;
        string dv; cin >> dv;
        for (int i=0; i<m; i++){
            if (dv[i]=='D'){
                a += b[i];
            } else{
                a = b[i]+a;
            }
        }
        cout << a << '\n';
    }
}