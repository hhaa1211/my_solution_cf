#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int a[4];
    for (int i=0; i<4; i++){
        cin >> a[i];
    }
    string s; cin >> s;
    int res = 0;
    for (char i : s){
        res += a[i-'0'-1];
    }
    cout << res; 
}