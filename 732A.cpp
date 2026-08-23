#include <iostream>

using namespace std;

int res(int x, int y){
    for (int i=1; i<10; i++){
        int j = x*i;
        j %= 10;
        if (j==y or j==0){
            return i;
        }
    }
    return 10;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int k, r; cin >> k >> r;
    cout << res(k, r);
}