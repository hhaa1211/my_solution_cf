#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while (n--){
        int a, b, c; cin >> a >> b >> c;
        if (a==b){
            cout << c << endl;
        } else if (a==c){
            cout << b << endl;
        } else{
            cout << a << endl;
        }
    }
}