#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    if (n%2){
        cout << -1;
    } else{
        int a[n];
        for (int i=0; i<n; i++){
            a[i] = i+1;
        }
        for (int i=0; i<n; i+=2){
            cout << a[i+1] << ' ' << a[i] << ' ';
        }
    }
}