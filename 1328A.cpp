#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while (n--){
        int a, b; cin >> a >> b;
        if (a%b==0){
            cout << 0 << endl;
        } else{
            cout << b*(a/b)+b-a << endl;
        }
    }
}