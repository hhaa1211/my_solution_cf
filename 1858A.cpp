#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c; cin >> a >> b >> c;
        int ana, kti;
        if (c%2){
            ana = c/2+a+1, kti = c/2+b;
        } else{
            ana = c/2+a, kti = c/2+b;
        }
        if (ana>kti){
            cout << "First\n";
        } else{
            cout << "Second\n";
        }

    }
}