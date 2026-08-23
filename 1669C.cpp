#include <iostream>

using namespace std;

bool solve(int a[], int n, int i){
    int c = a[i]%2;
    for (int j=i+2; j<n; j+=2){
        if (a[j]%2!=c){
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
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        if (solve(a, n, 0) && solve(a, n, 1)){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}