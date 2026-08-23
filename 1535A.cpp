#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (b<a){
            swap(a, b);
        }
        if (d<c){
            swap(c, d);
        }
        if (b<c || d<a){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    }
}