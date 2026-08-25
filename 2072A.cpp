#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k, p; cin >> n >> k >> p;
        int c = n*p;
        if (k>c || k<-c){
            cout << -1;
        } else{
            cout << (abs(k)+p-1)/p;
        }
        cout << '\n';
    }
}