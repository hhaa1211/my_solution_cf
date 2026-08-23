#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string tmp = "";
        for (int i=0; i<8; i++){
            for (int j=0; j<8; j++){
                char x; cin >> x;
                if (97<=x && x<=122){
                    tmp += x;
                }
            }
        }
        cout << tmp << '\n';
    }
}