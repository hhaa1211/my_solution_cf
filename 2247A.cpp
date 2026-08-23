#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        if (n%2){
            cout << "NO\n";
        } else{
            int c1 = 0;
            for (int i=0; i<n; i++){
                if (a[i]==1){
                    c1++;
                }
            }
            if (abs(n/2-c1)%2==0){
                cout << "YES\n";
            } else{
                cout << "NO\n";
            }
        }
    }
}