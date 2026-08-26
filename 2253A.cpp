#include <iostream>

using namespace std;

bool is_p(int n){
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if (is_p(n+1)){
            cout << "YES";
        } else{
            cout << "NO";
        }
        cout << '\n';
    }
}