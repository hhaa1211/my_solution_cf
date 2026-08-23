#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sl = 0,  res = 0;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            if (x%2){
                sl++;
            } 
            if (x%2!=i%2){
                res++;
            }
        }
        if (sl!=n/2){
            cout << -1 << endl; 
        } else{
            cout << res/2  << endl;
        }
    }
}