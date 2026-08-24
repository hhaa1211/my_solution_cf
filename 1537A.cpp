#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sum = 0;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            sum += x;
        }
        if (sum-n>=0){
            cout << sum-n << '\n';
        } else{
            cout << 1 << '\n';
        }
    }
}