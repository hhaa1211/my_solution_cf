#include <iostream>
#include <string>

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
        for (int i=0; i<n; i++){
            int j; cin >> j;
            string s; cin >> s;
            for (char c : s){
                if (c=='U') a[i]--;
                else a[i]++;
                if (a[i]>9) a[i] -= 10;
                if (a[i]<0) a[i] += 10;
            }
        }
        for (int i : a) cout << i << ' ';
        cout << '\n';
    }
}