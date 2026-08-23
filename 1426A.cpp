#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        int sum = 2, i = 1;
        while (sum<n){
            sum += x;
            i++;
        }
        cout  << i << '\n';
    }
}