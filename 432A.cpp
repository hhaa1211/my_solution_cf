#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; 
    for (int &i: a) cin >> i;
    int x = 0;
    for (int i=0; i<n; i++){
        if (a[i]+k<=5){
            x++;
        }
    }
    int res = x/3;
    cout << res;
}