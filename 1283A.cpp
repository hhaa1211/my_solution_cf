#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    int h, m;
    while (t--){
        cin >> h >> m;
        cout << (23-h)*60+(60-m) << '\n';
    }
}