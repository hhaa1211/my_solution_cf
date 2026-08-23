#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int res = 0, sum = 0;
    while (sum<=n){
        res++;
        sum += res*(res+1)/2;
    }
    cout << --res;
}