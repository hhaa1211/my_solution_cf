#include <iostream>
#include <vector>

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
        vector<int> b;
        b.push_back(a[0]);
        for (int i=1; i<n; i++){
            if (a[i]<a[i-1]){
                b.push_back(1);
            }
            b.push_back(a[i]);
        }
        cout << b.size() << '\n';
        for (int i=0; i<b.size(); i++){
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
}