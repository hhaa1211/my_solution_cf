#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        long long sum = 0;
        while (n--){
            int x; cin >> x;
            sum += x;
        }
        long long sq_s = sqrt(sum);
        if (sq_s*sq_s==sum){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}