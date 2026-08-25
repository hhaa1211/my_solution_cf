#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        bool flag = true;
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        bool b[n+1] = {};
        b[a[0]] = true;
        for (int i=1; i<n-1; i++){
            int l = a[i]-1, r = a[i]+1;
            if (l>0 && b[l] || r<n+1 && b[r]){
                b[a[i]] = true;
            } else{
                flag = false;
                break;
            }
        }
        if (flag){
            cout << "YES";
        } else{
            cout << "NO";
        }
        cout << '\n';
    }
}