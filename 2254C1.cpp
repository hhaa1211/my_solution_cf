#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string a, b; cin >> a >> b;
        int oa = 0, ea = 0, ob = 0, eb = 0;
        for (int i=0; i<n; i++){
            if (a[i]=='1'){
                if (i%2==0){
                    oa++;
                } else{
                    ea++;
                }
            }
            if (b[i]=='1'){
                if (i%2==0){
                    ob++;
                } else{
                    eb++;
                }
            }
        }
        if (oa==ob && ea==eb){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}