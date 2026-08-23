#include <iostream>
#include <algorithm>

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
        sort(a, a+n);
        swap(a[0], a[1]);
        swap(a[0], a[n-1]);
        if (a[0]==a[1]){
            cout << "NO\n";
            continue;
        } else{
            cout << "YES\n";
        }
        for (int i : a){
            cout << i << ' ';
        }
        cout << '\n';
    }
}