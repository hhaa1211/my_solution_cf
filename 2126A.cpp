#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        char j = '9';
        for (char i : n){
            if (i<j){
                j = i;
            }
        }
        cout << j << '\n';
    }
}