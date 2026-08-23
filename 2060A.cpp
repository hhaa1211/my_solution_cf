#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a1, a2, a4, a5; cin >> a1 >> a2 >> a4 >> a5;
        int x = a1+a2, y = a4-a2, z = a5-a4;
        if (x==y && y==z){
            cout << 3;
        } else if (x==y || y==z || x==z){
            cout << 2;
        } else{
            cout << 1;
        }
        cout << '\n';
    }
}