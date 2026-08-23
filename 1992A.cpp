#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a[3];
        for (int i=0; i<3; i++){
            cin >> a[i];
        }
        sort(a, a+3);
        for (int i=0; i<5; i++){
            a[0]++;
            sort(a, a+3);
        }
        cout << a[0]*a[1]*a[2] << '\n';
    }
}