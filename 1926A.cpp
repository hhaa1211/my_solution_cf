#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int c_A = 0, c_B = 0;
        for (char i : s){
            if (i=='A'){
                c_A++;
            } else{
                c_B++;
            }
        }
        if (c_A>c_B){
            cout << "A\n";
        } else{
            cout << "B\n";
        }
    }
}