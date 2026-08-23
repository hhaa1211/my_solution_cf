#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        if (a==b){
            cout << 0;
        } else if (a>b){
            if (a%2!=b%2){
                cout << 2;
            } else{
                cout << 1;
            }
        } else{
            if (a%2!=b%2){
                cout << 1;
            } else{
                cout << 2;
            }
        }
        cout << '\n';
    }
}