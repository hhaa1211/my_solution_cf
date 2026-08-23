#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        if (n==1){
            cout << "YES\n";
            continue;
        }
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n-1; i++){
            if (a[i]>i+1){
                a[i+1] += a[i]-(i+1);
                a[i] = i+1;
            }
        }
        bool flag = true;
        for (int i=1; i<n; i++){
            if (a[i]==a[i-1]){
                flag = false;
                break;
            }
        }
        if (flag){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}