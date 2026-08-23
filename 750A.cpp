#include <iostream>

using namespace std;

int res(int x){
    return x*(x+1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int i = 0;
    while (res(i)<=(240-k)*2/5){
        i++;
    }
    cout << min(--i, n);
}