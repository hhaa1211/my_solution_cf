#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k, x; cin >> n >> k >> x;
        if (x!=1){
            cout << "YES\n" << n << '\n';
            for (int i=0; i<n; i++){
                cout << 1 << ' ';
            }
        } else if (x==1){
            if (k==1){
                cout << "NO";
            } else if (k==2){
                if (n%2==0){
                    cout << "YES\n" << n/2 << '\n';
                    for (int i=0; i<n/2; i++){
                        cout << 2 << ' ';
                    }
                } else{
                    cout << "NO";
                }
            } else{
                cout << "YES\n" << n/2 << '\n';
                for (int i=0; i<n/2-1; i++){
                    cout << 2 << ' ';
                }
                if (n%2){
                    cout << 3;
                } else{
                    cout << 2;
                }
            }
        }
        cout << '\n';
    }
}